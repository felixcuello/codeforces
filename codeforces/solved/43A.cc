#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;

  map<string, int> counter;
  while(n--) {
    string s;
    cin >> s;
    counter[s]++;
  }

  int max = -1;
  string ans;
  for(map<string,int>::iterator i = counter.begin(); i != counter.end(); ++i) {
    if(i->second > max) {
      ans = i->first;
      max = i->second;
    }
  }

  cout << ans;

  return 0;
}
