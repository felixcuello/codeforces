#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
#include <unistd.h>

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main() {
  ll y, k, n;
  cin >> y >> k >> n;

  int a = 0;
  int xxx=n < 100000 ? n : 100000;
  for(; a<=xxx; ++a)
    if(k*a >= 1+y && a <= n)
      break;

  if(k*a > n) {
    cout << -1;
    return 0;
  }

  for(ll i=a; k*i<=n; ++i)
    if(i==a)
      cout << k*i-y;
    else
      cout << " " << k*i-y;

  return 0;
}
