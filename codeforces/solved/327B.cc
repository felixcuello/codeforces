#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  for(int i=9000000, j=0; j<n; ++i,++j) {
    if(i!=9000000)
      cout << " ";
    cout << i;
  }

  return 0;
}
