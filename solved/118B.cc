#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  /*
   * UPPER HALF
   */
  for(int row=0; row<=n; ++row) {
    // LEFT spaces
    for(int spb=0; spb<n-row; ++spb)
      cout << "  ";
    for(int i=0; i<=row; ++i) {
      if(i != 0) cout << " ";
      cout << i;
    }
    for(int i=row-1; i>=0; --i)
      cout << ' ' << i;
    cout << endl;
  }


  /*
   * BOTTOM HALF
   */
  for(int row=n-1; row>=0; --row) {
    // LEFT spaces
    for(int spb=0; spb<n-row; ++spb)
      cout << "  ";
    for(int i=0; i<=row; ++i) {
      if(i != 0) cout << " ";
      cout << i;
    }
    for(int i=row-1; i>=0; --i)
      cout << ' ' << i;
    cout << endl;
  }

  return 0;
}
