#include <bits/stdc++.h>
using namespace std;

int main() {
  int q; cin >> q;
  while(q--) {
    int l, r, d;
    cin >> l >> r >> d;
    if(d < l || d > r) {
      cout << d << endl;
    } else {
      cout << (r / d + 1) * d << endl;
    }
  }
  return 0;
}
