#include <iostream>
#include <vector>

using namespace std;

int main() {
  int c;
  cin >> c;

  int x = 0;
  int y = 0;
  int z = 0;

  while(c--) {
    int a,b,c;
    cin >> a >> b >> c;
    x += a;
    y += b;
    z += c;
  }

  cout << ((x==0 && y==0 && z==0) ? "YES" : "NO") << endl;

  return 0;
}
