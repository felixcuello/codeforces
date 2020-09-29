#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int f = 0;
  for(int i=0; i<n; ++i) {
    int xxx;
    cin >> xxx;
    f += xxx;
  }

  // TIPS
  // If you pay close attention there are only 4 options because Dima is going
  // to put always AT LEAST 1 finger, and AT MOST 5 fingers, therefore
  // We have to check the total number of fingers from his friends PLUS ONE
  // up to the number of finger from his friends PLUS FIVE (so the thumber
  // of fingers that Dima can use)
  //
  // The NOT allowed options are the numbers where the number of fingers shown
  // are == 1 (mod n+1) , all other options are valid options.
  //

  int ans = 0;
  for(int i=f+1; i<=f+5; ++i)
    if(i % (n+1) != 1)
      ++ans;

  cout << ans;

  return 0;
}
