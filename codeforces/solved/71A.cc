#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;
  while(n--) {
    string s;
    cin >> s;
    int sl = s.length();
    if(sl > 10)
      cout << s[0] << sl - 2 << s[sl-1] << endl;
    else
      cout << s << endl;
  }
  return 0;
}
