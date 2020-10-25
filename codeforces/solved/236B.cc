#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>

#define __sieve(n) vector<long> __sieve_mtx(n, true); vector<long> __primes; \
  for(long p=2; p<n;++p) { \
    if(__sieve_mtx[p] == false) continue; \
    __primes.push_back(p); \
    for(long i=p*p; i<n; i+=p) \
      __sieve_mtx[i] = false; \
  }

using namespace std;

int main() {
  __sieve(100);

  vector<int> divisors(1000005, 0);
  divisors[1] = 1;

  int ps = __primes.size();
  for(int j=2; j<=1000000; ++j) {
    int ans = 1;
    int e = j;
    for(int i=0; i<ps; ++i) {
      int current = 0;
      while(e % __primes[i] == 0) {
        ++current;
        e /= __primes[i];
        if(e == 0) break;
      }
      ans *= (current + 1); // https://mathschallenge.net/library/number/number_of_divisors
    }
    divisors[j] = ans;
  }

  int a, b, c;
  cin >> a >> b >> c;
  long ans = 0;
  for(int x=1; x<=a; ++x)
    for(int y=1; y<=b; ++y)
      for(int z=1; z<=c; ++z)
        ans = (ans + divisors[x*y*z]) % 1073741824;

  cout << ans;

  return 0;
}
