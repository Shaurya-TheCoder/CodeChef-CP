#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;
    if(x*y >= 100){
        cout <<"YES"<< endl;
    }else{
        cout << "NO"<< endl;
    }
}

int main() {
    ios::sync_with_stdio(false); // make cin/cout faster
    cin.tie(nullptr); // untie cin from cout for speed

    int t;
    t = 1; // number of test cases

    while (t--) {
        solve(); // call the solve() function for each test
    }

    return 0;
}