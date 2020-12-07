#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  int sl = s.length();
  for(int i=0; i<sl; ++i)
    if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
      cout << "YES";
      return 0;
      }

  cout << "NO";
  return 0;
  }
