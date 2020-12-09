#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
  string s;
  set<char> x;
  cin >> s;
  int sl = s.length();
  for(int i=0; i<sl; ++i)
    x.insert(s[i]);

  cout << (x.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");
  return 0;
}
