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
  int n,k; cin >> n >> k;
  for(int row=0; row<n; ++row) {
    for(int col=0; col<n; ++col) {
      if(col != 0)
        cout << " ";
      if(row == col)
        cout << k - n + 1;
      else
        cout << 1;
    }
    cout << endl;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  solve();

  return 0;
}
