#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>

typedef long long ll;
typedef unsigned long long ull;

#define __sieve(n) vector<long> __sieve_mtx(n, true); vector<long> __primes; \
  for(long p=2; p<n;++p) { \
    if(__sieve_mtx[p] == false) continue; \
    __primes.push_back(p); \
    for(long i=p*p; i<n; i+=p) \
      __sieve_mtx[i] = false; \
  }

using namespace std;

int main() {
  int n;
  vector<int> v;
  cin >> n;
  for(int i=0; i<n; ++i) {
    int e;
    cin >> e;
    v.push_back(e);
  }

  sort(v.begin(), v.end());

  ll ans = 0;
  for(int i=0; i<n; ++i)
    ans += abs(v[i] - i - 1);

  cout << ans;

  return 0;
}
