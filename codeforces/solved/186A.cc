#include <iostream>
#include <string>
#include <math.h>
#include <map>

using namespace std;

int main() {
  string d1;
  string d2;

  cin >> d1;
  cin >> d2;

  int d1l = d1.length();
  int d2l = d2.length();

  if(abs(d1l - d2l) > 0) {
    cout << "NO";
    return 0;
  }

  map<char, int> f;
  for(int i=0; i<d1l; ++i) {
    ++f[d1[i]];
    --f[d2[i]];
  }

  int diff = 0;
  for(int i=0; i<d1l; ++i) {
    if(d1[i] != d2[i])
      ++diff;

    if(f[d1[i]] != 0 || f[d2[i]] != 0) {
      cout << "NO";
      return 0;
    }
  }

  cout << (diff == 2 ? "YES" : "NO");

  return 0;
}
