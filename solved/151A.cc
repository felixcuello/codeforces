/**
   Maybe I should have used this equality:

   min(a/n, b/n) = min(a,b)/n

**/
#include <iostream>

using namespace std;

int main() {
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;

  int salt = p / (np*n);
  int limes = (c*d) / n;
  int liq = (k*l) / (nl*n);

  cout << min(salt, min(limes, liq));

  return 0;
}
