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
  vector<bool> v(3002,false);
  int n; cin >> n;
  while(n--) {
    int e; cin >> e;
    v[e] = true;
  }

  for(int i=1; i<=3001; ++i)
    if(v[i] == false) {
      cout << i;
      return;
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
