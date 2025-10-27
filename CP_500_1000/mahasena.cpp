#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int>soldiers(n);
    for(int i = 0; i < n; i++){
        cin >> soldiers[i];
    }
    int even = 0;
    int odd = 0;
    for(int i = 0; i < n; i++){
        if(soldiers[i]%2 == 0)
            even++;
        else
            odd++;
    }
    if(even > odd)
        cout << "READY FOR BATTLE" << endl;
    else
        cout << "NOT READY" << endl;
}

int main() {
    ios::sync_with_stdio(false); // make cin/cout faster
    cin.tie(nullptr); // untie cin from cout for speed

    solve(); // call the solve() function for each test

    return 0;
}