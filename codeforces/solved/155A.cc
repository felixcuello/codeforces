#include <iostream>

using namespace std;

int main() {
  int n, min, max;
  cin >> n >> min;
  max = min;
  int ans = 0;
  for(int i=0; i<n-1; ++i) {
    int e;
    cin >> e;
    if(e<min) {
      ans++;
      min = e;
    }
    if(e>max) {
      ans++;
      max = e;
    }
  }
  cout << ans;
  return 0;
}
