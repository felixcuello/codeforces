#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  string s1, s2;
  getline(std::cin, s1);
  int s1l = s1.length();
  getline(std::cin, s2);
  int s2l = s2.length();

  map<char, int> freq;
  for(int i=0; i<s1l; ++i) {
    if(s1[i] == ' ') continue;
    ++freq[s1[i]];
  }

  for(int i=0; i<s2l; ++i) {
    if(s2[i] == ' ') continue;
    --freq[s2[i]];
    if(freq[s2[i]] < 0) {
      cout << "NO";
      return 0;
    }
  }

  cout << "YES";

  return 0;
}
