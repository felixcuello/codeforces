#include <iostream>
#include <vector>

using namespace std;

int main() {
  string hello("helloX");
  string s;
  cin >> s;
  int sl = s.length();
  int hi = 0;

  for(int i=0; i<sl; ++i) {
    if(s[i] == hello[hi])
      hi++;

    if(hello[hi] == 'X') {
      cout << "YES";
      return 0;
    }
  }

  cout << "NO";
  return 0;
}
