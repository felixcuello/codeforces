#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    map<char, int> freq;

    int w,j;
    cin >> w;
    j = 0;
    while(j++<w) {
      string s;
      cin >> s;
      for(int i=0; i<s.length(); ++i)
        ++freq[s[i]];
    }


    bool skip = false;
    for(map<char,int>::iterator i=freq.begin(); i!=freq.end(); ++i)
      if(i->second % w) {
        cout << "NO" << endl;
        skip = true;
        break;
      }

    if(skip)
      continue;

    cout << "YES" << endl;
  }
  return 0;
}
