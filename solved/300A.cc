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
  int n; cin >> n;
  vector<int> negative, positive;

  while(n--) {
    int e; cin >> e;
    if(e < 0)
      negative.pb(e);
    if(e > 0)
      positive.pb(e);
  }

  if((int)positive.size() == 0) {
    // negative
    cout << "1 " << negative[0] << endl;

    // positive
    cout << "2";
    for(int i=1; i<3; ++i)
      cout << " " << negative[i];
    cout << endl;

    // zero
    cout << (1+(int)negative.size()-3) << " 0";
    for(int i=3; i<(int)negative.size(); ++i)
      cout << " " << negative[i];
    cout << endl;



  } else {
    // negative
    cout << "1 " << negative[0] << endl;
    // positive
    cout << positive.size();
    for(int i=0; i<(int)positive.size(); ++i)
      cout << " " << positive[i];
    cout << endl;

    // zero
    cout << (1+(int)negative.size()-1) << " 0";
    for(int i=1; i<(int)negative.size(); ++i)
      cout << " " << negative[i];
    cout << endl;
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
