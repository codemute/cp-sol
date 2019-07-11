/*
 filename: B.cpp
 author: abhishalya
 created: 2019-07-05 20:46:21
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  long long n; cin >> n; long long a[n];
  for(long long i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  if((a[n - 2] + a[0] > a[n - 1]) && (a[n - 1] + a[1] > a[0])) {
    cout << "YES\n";
    for(long long i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    cout << endl;
  } else {
    cout << "NO\n";
  }
  return 0;
}