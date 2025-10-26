#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// ---------------------------
// Function to solve one test case
// ---------------------------
void solve() {
    int n;
    cin >> n;  // input size of array
    cout << 2*n -2;
    cout << "\n"; // new line after each test case
}

// ---------------------------
// Main function
// ---------------------------
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
