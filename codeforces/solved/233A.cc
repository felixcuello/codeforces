#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  if(n % 2)
    cout << "-1";
  else
    for(int i=1; i<=n; i+=2) {
      if(i > 1)
        cout << " ";
      cout << i+1 << " " << i;
    }
  return 0;
}
