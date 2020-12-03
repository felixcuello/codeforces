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
  vector<pair<int,int> > lap;
  int n; cin >> n;
  while(n--) {
    int a, b; cin >> a >> b;
    lap.pb(mp(b,a));
  }

  sort(lap.rbegin(), lap.rend());

  bool happy_alex = false;
  int cq = lap[0].first;
  int minp = lap[0].second;
  for(int i=0; i<lap.size(); ++i) {
    if(lap[i].first < cq && lap[i].second > minp) {
      // less quality && higher price
      happy_alex = true;
      break;
    }

    if(lap[i].second < minp) // update minimum price
      minp = lap[i].second;

    // update current quality
    cq = lap[i].first;
  }

  cout << (happy_alex ? "Happy Alex" : "Poor Alex") << endl;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  solve();

  return 0;
}
