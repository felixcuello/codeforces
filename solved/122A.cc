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
  vector<int> lucky = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
  int n; cin >> n;
  for(int i=0; i<lucky.size(); ++i) {
    if(n % lucky[i] == 0) {
      cout << "YES";
      return;
    }
  }

  cout << "NO";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  solve();

  return 0;
}
