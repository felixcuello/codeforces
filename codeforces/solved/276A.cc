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

using namespace std;

void solve() {
  ll n,k; cin >> n >> k;
  ll ans = -1000000001 * 2;
  for(int r=0; r<n; ++r) {
    ll cur = 0;
    ll f, t; cin >> f >> t;
    if(t>k)
      cur = f - (t-k);
    else
      cur = f;

    if(cur > ans)
      ans = cur;
  }

  cout << ans;
  return;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  solve();

  return 0;
}
