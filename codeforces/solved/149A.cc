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
  int k;
  cin >> k;

  vector<int> m;
  for(int i=0; i<12; ++i) {
    int e;
    cin >> e;
    m.push_back(e);
  }

  if(k == 0) {
    cout << k;
    return 0;
  }

  sort(m.rbegin(), m.rend());
  int ans = 0;
  int sum = 0;
  for(;ans<12; ++ans) {
    sum += m[ans];
    if(sum >= k)
      break;
  }

  cout << (k > sum ? -1 : ans+1);

  return 0;
}
