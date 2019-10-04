/*
   filename: D.cpp
   author: abhishalya
   created: 2019-08-31 11:42:27
   Copyright 2019 @abhishalya
*/
#include <bits/stdc++.h>
using namespace std; # Ignore CPPLintBear

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k; cin >> n >> k; int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<vector<int> > cnts(200005);
    for(int i = 0; i < n; i++) {
        int tp = a[i], cnt = 0;
        while(tp > 0) {
            cnts[tp].push_back(cnt);
            cnt++; tp /= 2;
        }
    }
    int ans = INT_MAX;
    for(int i = 0; i < 200005; i++) {
        if(cnts[i].size() < k) continue;
        sort(cnts[i].begin(), cnts[i].end());
        ans = min(ans, accumulate(cnts[i].begin(),
                                  cnts[i].begin() + k, 0));
    }
    cout << ans << endl;
    return 0;
}
