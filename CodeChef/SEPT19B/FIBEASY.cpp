/*
   filename: FIBEASY.cpp
   author: abhishalya
   created: 2019-09-12 14:59:00
   Copyright 2019 @abhishalya
*/
#include <bits/stdc++.h>
using namespace std; # Ignore CPPLintBear

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin >> t;
    int fib[60]; fib[0] = 0, fib[1] = 1;
    for(int i = 2; i < 60; i++) {
        fib[i] = (fib[i - 1] + fib[i - 2]) % 10;
    }
    while(t--) {
        ll n; cin >> n;
        // ll x = log2(n), y = pow(2, x);
        ll x = 1;
        while(x * 2 <= n) x *= 2;
        cout << fib[(x - 1) % 60] << endl;
    }
    return 0;
}
