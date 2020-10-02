/*
The _only_ difficult part of this is realize the sequence

1

2 1

3 1 2

4 1 2 3

5 1 2 3 4
*/

#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  if(n==1) {
    cout << "1";
    return 0;
  }

  cout << n;
    
  for(int i=1; i<n; ++i)
      cout << " " << i;

  return 0;
}
