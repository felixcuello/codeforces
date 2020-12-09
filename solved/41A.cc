#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string s,t;
  cin >> s >> t;

  int sl = s.length();
  int tl = t.length();

  if(sl == tl) {
    for(int i=0; i<sl; ++i)
      if(s[i] != t[sl-i-1]) {
        cout << "NO";
        return 0;
      }
  } else {
    cout << "NO";
    return 0;
  }

  cout << "YES";

  return 0;
}
