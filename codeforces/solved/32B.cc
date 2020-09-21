#include <iostream>
#include <string>

using namespace std;

int main() {
  string s, res("");
  cin >> s;
  int l = s.length();
  for(int i=0; i<l; ++i)
    if(s[i] == '.')
      res.push_back('0');
    else {
      if(s[i+1] == '.')
        res.push_back('1');
      else
        res.push_back('2');
      ++i;
    }
  cout << res << endl;
  return 0;
}
