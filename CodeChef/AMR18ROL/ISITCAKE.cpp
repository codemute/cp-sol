// Copyright 2019 abhishalya

#include <bits/stdc++.h>

int main() {
  int t; cin >> t;
  while (t--) {
    int cnt = 0;
    for (int i = 0; i < 100; i++) {
      int a; cin >> a;
      if (a <= 30) cnt++;
    }
    if (cnt >= 60)
      cout << "yes\n";
    else
      cout << "no\n";
  }
  return 0;
}
