#include <iostream>
#include <algorithm>
#include <vector>

#define min(a,b) (a<b ? a : b)

using namespace std;

int main() {
  int n;
  size_t m;
  cin >> n >> m;
  vector<int> v;
  while(n--) {
    int tv;
    cin >> tv;
    v.push_back(tv);
  }

  sort(v.begin(), v.end());

  int ans = 0;
  for(size_t i=0; i<min(v.size(), m); ++i)
    if(v[i] <= 0)
      ans += v[i];

  cout << -ans;
  return 0;
}
