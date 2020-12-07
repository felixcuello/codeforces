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

void solve() {
  int n; cin >> n;
  ull upper = 0, lower = 0;
  int different_tiles = 0;
  for(int i=0; i<n; ++i) {
    ull u,l; cin >> u >> l;
    upper += u;
    lower += l;
    if(u != l)
      ++different_tiles;
  }

  if(upper % 2 == 0 && lower % 2 == 0) // even/even
    cout << 0;
  else if((upper % 2) != (lower %2)) // even/odd  ||  odd/even
    cout << -1;
  else {// odd/odd
    if(different_tiles < 2) // We need at least 2 tiles different
      cout << -1;
    else
      cout << 1;
  }
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
