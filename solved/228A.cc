#include <iostream>
#include <set>

using namespace std;

int main() {
  int ans = 0;
  int e;
  cin >> e;
  set<int> s;
  s.insert(e);

  for(int i=0; i<3; ++i) {
    cin >> e;
    if(s.find(e) != s.end())
      ans++;
    s.insert(e);
  }

  cout << ans;
  return 0;
}
