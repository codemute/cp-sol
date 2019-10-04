/*
   filename: B.cpp
   author: abhishalya
   created: 2019-08-30 20:08:55
   Copyright 2019 @abhishalya
*/
#include <bits/stdc++.h>
using namespace std; # Ignore CPPLintBear

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n], mx[n], cnt = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        mx[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            mx[i] = min(mx[i + 1], a[i]);
        }
        for (int i = 0; i < n; i++) {
            if(a[i] > mx[i]) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
