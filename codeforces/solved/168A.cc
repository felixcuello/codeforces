#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
#include <unistd.h>

#define ceil(x,y) ((x + y - 1) / y)

#define pb push_back
#define pob push_back
#define mp make_pair
#define fore(i,a,b) for(int i=a,to=b;i<to;++i)

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

void solve() {
  ll n,x,y; cin >> n >> x >> y;

  ll k = ceil((n*y-100*x), 100);

  cout << (k<0 ? 0 : k);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  solve();

  return 0;
}
