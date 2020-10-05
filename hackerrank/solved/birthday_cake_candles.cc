#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  int maxcandle = 0;
  int maxcandlecount = 0;
  cin >> n;
  while(n--) {
    int c;
    cin >> c;
    if(c == maxcandle)
      ++maxcandlecount;
    if(c > maxcandle) {
      maxcandle = c;
      maxcandlecount = 1;
    }
  }

  cout << maxcandlecount;

  return 0;
}
