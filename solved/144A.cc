#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int min = 200;
  int max = -1;
  int minpos, maxpos;
  int e;
  for(int i=0; i<n; ++i) {
    cin >> e;
    if(e <= min) {
      min = e;
      minpos = i;
    }

    if(e > max) {
      max = e;
      maxpos = i;
    }
  }

  int ans = maxpos + (n - minpos) - 1;

  if(minpos < maxpos)
    ans -= 1;

  // cout << "-------------------------------" << endl;
  // cout << "min=" << min << endl;
  // cout << "max=" << max << endl;
  // cout << "minpos=" << minpos << endl;
  // cout << "maxpos=" << maxpos << endl;
  // cout << "swap=" << (minpos < maxpos) << endl;
  cout << ans;

  return 0;
}
