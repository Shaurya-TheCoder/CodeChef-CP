#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int N; string s;
    cin >> N >> s;

    int x = 0;
    for(int i = 0; i < N; i++){
        if(s[i] == '0')
            x++;
        else
            break;
    }
    cout << x << endl;
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