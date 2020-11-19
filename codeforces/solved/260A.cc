#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
#include <unistd.h>

#define pb push_back
#define pob push_back
#define mp make_pair
#define fore(i,a,b) for(int i=a,to=b;i<to;++i)

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
  ll a,b,n; cin >> a >> b >> n;

  bool found = false;
  for(int d=0; d<10; ++d) {
    if((a*10+d) % b == 0) {
      a = a*10+d;
      found = true;
      break;
    }
  }

  if(found) {
    cout << a;
    for(int i=1; i<n; ++i)
      cout << 0;
  } else {
    cout << -1;
  }

  return 0;
}
