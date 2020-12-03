#include <iostream>
#include <string>

#define downcase(c) ((c >= 'A' && c <= 'Z') ? char(c + ' ') : c)
#define consonant(c) (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&c != 'y')

using namespace std;

int main() {
  string s;
  string ans;
  cin >> s;
  int sl = s.length();
  for(int i=0; i<sl; ++i) {
    char d = downcase(s[i]);
    if(consonant(d)) {
      ans.push_back('.');
      ans.push_back(d);
    }
  }

  cout << ans;
  return 0;
}
