#include <iostream>
#include <vector>

using namespace std;

int distinct(int y) {
  vector<bool> seen(10, false);
  while(y) {
    int r = y % 10;
    if(seen[r])
      return false;
    seen[r] = true;
    y /= 10;
  }

  return true;
}

int main() {
  int y;
  cin >> y;
  while(y++) {
    if(distinct(y))
      break;
  }
  cout << y;
  return 0;
}
