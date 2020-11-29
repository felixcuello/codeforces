#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
#include <unistd.h>
#include <limits.h>

#define ceil(x,y) ((x + y - 1) / y)

#define pb push_back
#define pob push_back
#define mp make_pair
#define fore(i,a,b) for(int i=a,to=b;i<to;++i)

/* limits.h
 * LONG_MIN   -2147483647
 * LONG_MAX   2147483647
 * ULONG_MAX  4294967295
 * LLONG_MIN  -9223372036854775807
 * LLONG_MAX  9223372036854775807
 * ULLONG_MAX 18446744073709551615
 */

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

void solve() {
}

int main() {
//  ifstream in;
//  ofstream out;

//  in.open("input.txt");
//  out.open("output.txt");
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  solve();

  return 0;
}
