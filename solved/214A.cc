#include <iostream>

using namespace std;

int main() {
  int n,m;
  int ans = 0;
  cin >> n >> m;
  for(int a=0; a<40; ++a)
    for(int b=0; b<40; ++b)
      if((a*a+b == n) && (a+b*b==m))
        ++ans;
  cout << ans;
  return 0;
}
