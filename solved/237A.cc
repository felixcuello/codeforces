#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
#include <unistd.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
  int n;
  cin >> n;

  map<pair<int,int>, int > freq;
  while(n--) {
    int h,m;
    cin >> h >> m;
    ++freq[make_pair(h,m)];
  }

  ull ans = 0;
  ull curr = 0;
  for(map<pair<int,int>, int>::iterator i=freq.begin(); i!=freq.end(); ++i) {
    curr = i->second;
    if(curr > ans)
      ans = curr;
  }

  cout << ans;
  return 0;
}
