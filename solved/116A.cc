#include <iostream>

using namespace std;

int main() {
  int n, u, d;
  int max = 0;
  int current = 0;

  cin >> n;

  for(int i=0; i<n; ++i) {
    cin >> d >> u;
    current += u-d;
    if(current > max)
      max = current;
  }

  cout << max;

  return 0;
}
