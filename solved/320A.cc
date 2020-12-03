#include <iostream>
#include <string>

using namespace std;

int main() {
  string n;
  cin >> n;
  int nl = n.length();
  for(int i=nl-1; i>=0; --i) {
    if(n[i] == '1') {
      continue;
    } else if(i>0 && n[i] == '4' && n[i-1] == '1') {
      --i;
      continue;
    } else if(i>1 && n[i] == '4' && n[i-1] == '4' && n[i-2] == '1') {
      i -= 2;
      continue;
    } else {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";
  return 0;
}
