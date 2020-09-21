#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int lo,lc,ro,rc;
  lo = lc = ro = rc = 0;

  for(int i=0; i<n; ++i) {
    int l,r;
    cin >> l >> r;
    if(l == 1) lo++;
    if(l == 0) lc++;
    if(r == 1) ro++;
    if(r == 0) rc++;
  }

  int ans = 0;

  ans += (ro < rc) ? ro : rc;
  ans += (lo < lc) ? lo : lc;

  cout << ans;

  return 0;
}
