#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> A(n);
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    vector<pair<long long, int>> arr;
    for(int i = 0; i < n; i++){
        arr.push_back({A[i], i});
    }

    sort(arr.begin(), arr.end());
    vector<long long>ans(n, 0);

    for(int i = 0; i < n; i++){
        if(i == 0 || i == n-1)
            ans[arr[i].second] = -1;
        else
            {
                double left = (arr[i-1].first + arr[i].first) / 2.0;
                double right = (arr[i].first + arr[i+1].first) / 2.0;

                long long count = floor(right) - floor(left);
                ans[arr[i].second] = max(0LL, count);
            }
    }

    for(auto x: ans)
        cout << x <<" ";
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false); // make cin/cout faster
    cin.tie(nullptr); // untie cin from cout for speed

    int t;
    cin >> t; // number of test cases

    while (t--) {
        solve(); // call the solve() function for each test
    }

    return 0;
}