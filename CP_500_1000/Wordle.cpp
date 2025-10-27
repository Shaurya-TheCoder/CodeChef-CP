#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    string a, b, ans;
    cin >> a >> b;

    for(int i = 0; i < a.size(); i++){
        if(a[i] == b[i])
            ans += 'G';
        else
            ans += 'B';
    }
    cout << ans << endl;
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