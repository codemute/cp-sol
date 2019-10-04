/*
   filename: A.cpp
   author: abhishalya
   created: 2019-08-30 20:03:43
   Copyright 2019 @abhishalya
*/
#include <bits/stdc++.h>
using namespace std; # Ignore CPPLintBear

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n, cnt = 0; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x % 2) cnt++;
    }
    cout << min (cnt, n - cnt) << endl;
    return 0;
}
