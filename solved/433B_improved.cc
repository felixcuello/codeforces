#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main() {
  int n;
  vector<ull> stones;
  vector<ull> stones_s;

  // Parser
  cin >> n;
  for(int i=0; i<n; ++i) {
    ull e;
    cin >> e;
    stones.push_back(e);
    stones_s.push_back(e);
  }

  sort(stones_s.begin(), stones_s.end());

  //  Memo
  map<pair<int,int>, ull> mem;
  map<pair<int,int>, ull> mem_s;
  ull sum = 0;
  ull sum_s = 0;
  for(int i=0; i<n; ++i) {
    sum += stones[i];
    sum_s += stones_s[i];

    mem[make_pair(1, i+1)] = sum;
    mem_s[make_pair(1, i+1)] = sum_s;
  }

  //  Calculation
  int m;
  cin >> m;
  while(m--) {
    int q, l, r;
    cin >> q >> l >> r;
    ll ans = 0;
    if(q == 1)
      ans = mem[make_pair(1,r)] - mem[make_pair(1,l-1)];
    else
      ans = mem_s[make_pair(1,r)] - mem_s[make_pair(1,l-1)];

    cout << ans << endl;
  }

  return 0;
}
