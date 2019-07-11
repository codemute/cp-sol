/*
 filename: A.cpp
 author: abhishalya
 created: 2019-07-05 20:28:44
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int n; cin >> n;
  string s; cin >> s;
  int c0 = 0, c1 = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == '1') c1++;
    else c0++;
  }
  if(c0 != c1) {
    cout << 1 << "\n" << s << endl;
  } else {
    cout << 2 << "\n";
    for(int i = 0; i < n - 1; i++) cout << s[i];
    cout << " " << s[n - 1] << endl;
  }
  return 0;
}