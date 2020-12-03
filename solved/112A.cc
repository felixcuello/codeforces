#include <iostream>
#include <string>

using namespace std;

int main() {
  string a,b;
  cin >> a >> b;
  int sl = a.length();
  for(int i=0; i<sl; ++i) {
    a[i] = tolower(a[i]);
    b[i] = tolower(b[i]);
    if(a[i] > b[i]) {
      cout << "1";
      return 0;
    } else if(a[i] < b[i]) {
      cout << "-1";
      return 0;
    }
  }

  cout << "0";
  return 0;
}
