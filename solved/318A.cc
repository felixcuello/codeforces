#include <iostream>
#include <math.h>

typedef unsigned long long ull;

using namespace std;

int main() {
  ull n,k;
  cin >> n >> k;

  ull ans = 1;
  if(k>ceil(n/2.0)) {
    ans = 2;
    k -= ceil(n/2.0);
  }

  while(--k)
    ans += 2;

  cout << ans;

  return 0;
}
