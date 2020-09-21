#include <string>
#include <iostream>

using namespace std;

int main() {
  int n;
  string s;
  int res = 0;
  char l = s[0];
  cin >> n >> s;
  for(int i=0; i<n; ++i) {
    if(l == s[i])
      res++;
    l = s[i];
  }

  cout << res;

  return 0;
}
