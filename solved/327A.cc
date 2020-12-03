#include <iostream>

using namespace std;

int main() {
  int n; cin >> n;

  int ones = 0, zeros=0, max_zeros=0;
  while(n--) {
    int e; cin >> e;

    if(e) {
      zeros = max(0, --zeros);
      ++ones;
    } else {
      ++zeros;
      if(zeros > max_zeros)
        max_zeros = zeros;
    }
  }

  if(max_zeros == 0)
    max_zeros = -1;

  cout << ones + max_zeros;
  return 0;
}