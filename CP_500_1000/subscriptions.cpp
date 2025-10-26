#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    if(n < 6)
        cout << x << endl;
    else
        cout << ceil((float)n/6)*x << endl;
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