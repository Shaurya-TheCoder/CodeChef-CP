#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    int maxProfit = 0;
    for(int i = 1; i <= n; i++){
        if(i > x)
            maxProfit += i-x;
    }

    cout << maxProfit << endl;
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