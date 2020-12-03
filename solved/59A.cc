/*
 * https://codeforces.com/problemset/problem/59/A
 *
 */
#include <string>
#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  int l = s.length();
  int w = 0;
  for(int i=0; i < l; ++i)
    if(s[i] >= 'A' && s[i] <= 'Z')
      --w;
    else
      ++w;

  bool lowercase = w >= 0;

  for(int i=0; i < l; ++i) {
    if(lowercase) {
      if(s[i] >= 'A' && s[i] <= 'Z')
        s[i] += 32;
    } else {
      if(s[i] >= 'a' && s[i] <= 'z')
        s[i] -= 32;
    }
  }

  cout << s << endl;
  return 0;
}
