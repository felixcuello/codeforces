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
  int n,k;
  cin >> n >> k;

  int a, b;
  vector<pair<int, int> > pos;
  for(int t=0; t<n; ++t) {
    int a, b;
    cin >> a >> b;
    pos.push_back(make_pair(a,50-b)); // More problems but less time
  }

  sort(pos.rbegin(), pos.rend());

  /*
  for(int i=0; i<pos.size(); ++i)
    cout << pos[i].first << " | " << pos[i].second << endl;
  */

  int ans = 0;
  int problems = pos[0].first;
  int penalties = pos[0].second;
  for(int i=0; i<n; ++i) {
    if(pos[i].first == problems && pos[i].second == penalties) {
      ++ans;
    } else {
      if(i>=k)
        break;
      ans = 1;
      problems = pos[i].first;
      penalties = pos[i].second;
    }
  }

  cout << ans;
  return 0;
}
