#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  while(n--) {
    int v,s,t;
    cin >> v >> s >> t;
    if(v+s+t > 1)
      ++ans;
  }

  cout << ans;
}
