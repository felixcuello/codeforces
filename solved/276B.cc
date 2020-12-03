#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  string s;
  cin >> s;
  map<char, int> freq;
  int sl = s.length();
  for(int i=0; i<sl; ++i)
    ++freq[s[i]];

  int amount = 0;
  for(auto i : freq)
    if(i.second % 2)
      ++amount;

  if(amount % 2) {
    cout << "First";
  } else {
    if(amount == 0)
      cout << "First";
    else
      cout << "Second";
  }

  return 0;
}
