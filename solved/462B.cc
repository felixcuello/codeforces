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
  string s;
  ull n,k; cin >> n >> k >> s;

  map<char,ull> freq;
  for(int i=0; i<n; ++i)
    ++freq[s[i]];

  vector<ull> cards;
  for(map<char,ull>::iterator i=freq.begin(); i!=freq.end(); ++i)
    cards.pb(i->second);

  sort(cards.rbegin(), cards.rend());

  ull ans = 0;
  int cs = cards.size();
  for(int i=0; i<cs && k > 0; ++i)
    if(cards[i] <= k) {
      ans += cards[i] * cards[i];
      k -= cards[i];
    } else {
      ans += k*k;
      k = 0;
    }

  cout << ans;

  return 0;
}
