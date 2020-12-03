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
  int n, m;
  cin >> n >> m;

  int current = 1;
  ull ans = 0;
  while(m--) {
    int e;
    cin >> e;

    if(e >= current) {
      ans += (e-current);
      current = e;
    } else {
      ans += (n-current) + e;
      current = e;
    }
  }

  cout << ans;

  return 0;
}
