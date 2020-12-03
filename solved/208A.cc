#include <iostream>
#include <string>

#define wub(v,i) (v[i] == 'W' && v[i+1] == 'U' && v[i+2] == 'B')

using namespace std;

int main() {
  string s, ans;
  cin >> s;
  int sl = s.length();
  int lastwub = false;
  for(int i=0; i<sl; ++i) {
    if(i<sl-2 && wub(s,i)) {
      if(lastwub == false)
        ans.push_back(' ');
      lastwub = true;
      i += 2;
      continue;
    }
    lastwub = false;

    ans.push_back(s[i]);
  }

  sl = ans.length();
  for(int i=0; i<sl; ++i)
    if((i==0 || i==sl-1) && ans[i] == ' ')
      continue;
    else
      cout << ans[i];

  return 0;
}
