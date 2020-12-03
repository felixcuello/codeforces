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

vector<int> mem(10000,0);

ll find_max(ll n, ll a, ll b, ll c) {
  if(n < 0)
    return -4000;

  if(n == 0)
    return 0;

  if(mem[n] != 0)
    return mem[n];

  mem[n] = 1 + max(
      find_max(n-a, a, b, c),
      max(
        find_max(n-b, a, b, c),
        find_max(n-c, a, b, c)
        )
      );

  return mem[n];
}

int main() {
  ll n, a, b, c;
  cin >> n >> a >> b >> c;

  cout << find_max(n, a, b, c);

  return 0;
}
