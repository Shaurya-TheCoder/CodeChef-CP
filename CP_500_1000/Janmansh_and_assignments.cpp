#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int x;
    cin >> x;
    if(x+3 > 10)
        cout << "NO\n";
    else
        cout << "YES\n";
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