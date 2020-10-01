#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  int k;
  string s;
  cin >> k >> s;

  map<char, int> freq;
  int sl = s.length();
  // Count frequencies
  for(int i=0; i<sl; ++i)
    freq[s[i]]++;

  // Check if it's possible or not
  // It is only possible if all frequencies are %k == 0
  for(map<char,int>::iterator i=freq.begin(); i!=freq.end(); ++i)
    if(i->second % k) {
      cout << -1;
      return 0;
    }

  // Basically any string that has k times...
  for(int x=0; x<k; ++x)
    // ....each letter
    for(map<char,int>::iterator i=freq.begin(); i!=freq.end(); ++i)
      // ..... for a freq/k times
      for(int j=0; j<(i->second/k); ++j)
        cout << i->first;  // is a valid string :-)

  return 0;
}
