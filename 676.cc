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

  if(maxpos - minpos == n) {
    cout << n-1; // They're in the best position, so we lose 1
  } else {
  }

  return 0;
}
