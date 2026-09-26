#include <iostream>

using namespace std;

int main() {
  int n; cin >> n;
  while(n--) {
    int k; cin >> k;
    int max = 0;
    while(k--) {
      int temp; cin >> temp;
      if(temp > max) max = temp;
    }
    cout << max << '\n';
  }
}
