#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> v(n);
  int min = 200;
  int max = -1;
  int minpos = 0;
  int maxpos = 0;
  for(int i=0; i<n; i++) {
    cin >> v[i];
    if(v[i] < min) {
      min = v[i];
      minpos = i+1;
    }

    if(v[i] > max) {
      max = v[i];
      maxpos = i+1;
    }
  }

  if(maxpos - minpos == n - 1) {
    cout << n - 1; // They're in the best position, so we lose 1
  } else {
    int left = minpos > maxpos ? maxpos : minpos;
    int right = minpos < maxpos ? maxpos : minpos;
    if(left <= n - right) {
      cout << n - left;
    } else {
      cout << right - 1;
    }
  }

  return 0;
}
