#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  int count;
  char last = 'n';

  cin >> s;
  int sl=s.length();

  for(int i=0; i<sl; ++i) {
    if(last != s[i]) {
      count = 1;
      last = s[i];
    } else {
      if(++count >= 7) {
        cout << "YES";
        return 0;
      }
    }
  }

  cout << "NO";
  return 0;
}
