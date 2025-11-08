#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int  W,P,K;

    cin >> W >> P >> K;

    int Wchairs = min(K, W); 
    K -= Wchairs;
    int Pchairs =  min(K, P);

    cout << Wchairs*2 + Pchairs << endl;
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