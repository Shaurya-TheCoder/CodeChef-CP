#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int>nums;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end(), greater<int>());
    int last = n-1;
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(sum == nums[i]){
            sum += nums[last];
            swap(nums[i], nums[last]);
            last --;
        }else{
            sum += nums[i];
        }
    }
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
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