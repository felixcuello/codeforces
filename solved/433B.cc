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
  vector<ull> stones;
  vector<ull> stones_s;

  // Parser
  cin >> n;
  for(int i=0; i<n; ++i) {
    ull e;
    cin >> e;
    stones.push_back(e);
    stones_s.push_back(e);
  }

  sort(stones_s.begin(), stones_s.end());

  //  Memo
  map<pair<int,int>, ull> mem;
  map<pair<int,int>, ull> mem_s;
  ull sum = 0;
  ull sum_s = 0;
  for(int i=0; i<n; ++i) {
    sum += stones[i];
    sum_s += stones_s[i];

    mem[make_pair(1, i+1)] = sum;
    mem_s[make_pair(1, i+1)] = sum_s;
  }

  sum = mem[make_pair(1, n)];
  sum_s = mem_s[make_pair(1,n)];
  for(int i=1; i<n; ++i) {
    sum -= stones[i-1];
    sum_s -= stones_s[i-1];

    mem[make_pair(i+1, n)] = sum;
    mem_s[make_pair(i+1, n)] = sum_s;
  }

  // 1 2 3  4  5
  // 1 3 6 10 15
  /*
  for(int i=0; i<n; ++i) {
    cout << "range " << i+1 << "," << n << " = " << mem_s[make_pair(i+1,n)] << endl;
  }
  */


  //  Calculation
  int m;
  cin >> m;
  while(m--) {
    int q, l, r;
    cin >> q >> l >> r;
    ll ans = 0;
    if(q == 1) {
      if(l>1 && r<n)
        ans = mem[make_pair(1,r)] - mem[make_pair(1,l-1)];
      else
        ans = mem[make_pair(l,r)];
    } else {
      if(l>1 && r<n)
        ans = mem_s[make_pair(1,r)] - mem_s[make_pair(1,l-1)];
      else
        ans = mem_s[make_pair(l,r)];
    }

    cout << ans << endl;
  }

  return 0;
}
