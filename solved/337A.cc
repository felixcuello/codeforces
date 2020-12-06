#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  vector<int> p;
  for(int i=0; i<m; ++i) {
    int e;
    cin >> e;
    p.push_back(e);
  }

  sort(p.begin(), p.end());

  int ans = 1000000;

  for(int i=0; i<=m-n; ++i)
    if(p[i+n-1]-p[i] < ans)
      ans = p[i+n-1] - p[i];

  cout << ans;

  return 0;
}
