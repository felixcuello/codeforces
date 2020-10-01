#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, m;
  vector<int> a,b;

  cin >> n;
  int i=0;
  while(i++ < n) {int e; cin >> e; a.push_back(e);}

  cin >> m;
  i=0;
  while(i++ < m) {int e; cin >> e; b.push_back(e);}

  int ans = 0;
  int max = -1;
  for(int bj=0; bj<m; ++bj)
    for(int ai=0; ai<n; ++ai)
      if(b[bj] % a[ai] == 0) {
        int temp = b[bj] / a[ai];
        if(temp == max)
          ans++;
        if(temp > max) {
          ans = 1;
          max = temp;
        }
      }

  cout << ans;
  return 0;
}
