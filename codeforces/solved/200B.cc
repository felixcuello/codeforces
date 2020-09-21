#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  float sum = 0;
  for(int i=0; i<n; ++i) {
    int e;
    cin >> e;
    sum += e;
  }

  printf("%.12f", sum / n);

  return 0;
}
