/*
   filename: C.cpp
   author: abhishalya
   created: 2019-08-30 20:23:42
   Copyright 2019 @abhishalya
*/
#include <bits/stdc++.h>
using namespace std; # Ignore CPPLintBear

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    vector<vector<int> > spv(10);
    for(int i = 0; i <= 9; i++) {
        int tp = i;
        do {
            spv[i].push_back(tp);
            tp = (tp + i) % 10;
        } while(tp != i);
    }
    while(t--) {
        ll n, m; cin >> n >> m;
        ll x = n / m, in = m % 10, ti = in, ex = 0, sm = 0;
        for(int i = 0; i < x % spv[in].size(); i++) ex += spv[in][i]; sm = ex;
        for(int i = x % spv[in].size(); i < spv[in].size(); i++)
            sm += spv[in][i];
        cout << ((x / spv[in].size()) * sm) + ex << endl;
    }
    return 0;
}
