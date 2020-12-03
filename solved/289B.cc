#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int main() {
  int n,m,d;
  cin >> n >> m >> d;
  vector<int> v;
  for(int i=0; i<n*m; ++i) {
    int e;
    cin >> e;
    v.push_back(e);
  }

  unsigned long long ans = 2000000000;;
  for(int i=0; i<n*m; ++i) {
    unsigned long long cu = 0;
    for(int j=0; j<n*m; ++j) {
      if(abs(v[i]-v[j]) % d == 0) {
        cu += abs(v[i]-v[j]) / d;
      } else {
        cout << -1;
        return 0;
      }
    }
    if(cu < ans)
      ans = cu;
  }

  cout << ans;

  return 0;
}
