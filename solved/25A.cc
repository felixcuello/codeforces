#include <iostream>

using namespace std;

int main() {
  int n; cin >> n;
  int pos = 0;
  int even = 0;
  int odd = 0;
  int evens = 0;
  int odds = 0;
  for(int i=0; i<n; i++) {
    int temp; cin >> temp;
    if(temp % 2) {
      odd = i+1;
      odds++;
    } else {
      even = i+1;
      evens++;
    }
  }
  cout << (evens > odds ? odd : even);
  return 0;
}