#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a+b+c <= 1)
        cout << "Water filling time\n";
    else
        cout << "Not now\n";
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