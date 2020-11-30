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
  map<int, string> can;
  for(int a=1; a<180; ++a) {
    can[a] = "NO";
    for(int n=3; n<=360; ++n) {
      if(360 == n * (180 - a)) {
        can[a] = "YES";
        break;
      }
    }
  }

  int t; cin >> t;
  while(t--) {
    int a; cin >> a;
    cout << can[a] << endl;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  solve();

  return 0;
}
