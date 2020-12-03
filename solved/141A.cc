#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
  map<char, int> letters;
  string t;
  int total = 0;

  cin >> t;
  int tl = t.length();
  for(int i=0; i<tl; ++i) {
    if(letters.find(t[i]) == letters.end())
      letters[t[i]] = 1;
    else
      letters[t[i]]++;
    ++total;
  }

  cin >> t;
  tl = t.length();
  for(int i=0; i<tl; ++i) {
    if(letters.find(t[i]) == letters.end())
      letters[t[i]] = 1;
    else
      letters[t[i]]++;
    ++total;
  }

  cin >> t;
  tl = t.length();
  for(int i=0; i<tl; ++i)
    if(letters.find(t[i]) == letters.end()) {
      cout << "NO";
      return 0;
    } else {
      letters[t[i]]--;
      total--;
      if(letters[t[i]] < 0) {
        cout << "NO";
        return 0;
      }
    }

  cout << (total == 0 ? "YES" : "NO");
  return 0;
}
