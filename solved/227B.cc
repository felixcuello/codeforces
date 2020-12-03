#include <iostream>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;
  map<int,int> pos;
  for(int i=1; i<=n; ++i) {
    int a;
    cin >> a;
    pos[a] = i;
  }

  unsigned long long x = 0;
  unsigned long long y = 0;
  int b;
  cin >> b;
  while(b--) {
    int e;
    cin >> e;
    x += pos[e];
    y += n - pos[e] + 1;
  }

  cout << x << " " << y;

  return 0;
}
