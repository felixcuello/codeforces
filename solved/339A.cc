#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  string s;
  cin >> s;
  int l = s.length();
  vector<int> v;
  for(int i=0; i<l; ++i)
    if(s[i] != '+')
      v.push_back(s[i] - '0');

  sort(v.begin(), v.end());

  int vs=v.size();

  for(int i=0; i<vs; ++i) {
    if(i > 0)
      cout << '+';
    cout << v[i];
  }
  return 0;
}
