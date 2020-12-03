#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int n;
  string s, a, b;

  cin >> n >> s;
  for(int i=0; i<2*n; ++i)
    if(2*i<2*n)
      a.push_back(s[i]);
    else
      b.push_back(s[i]);

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  bool maybe_unlucky = false;
  for(int i=0; i<n; ++i)
    if(a[i] >= b[i]) {
      maybe_unlucky = true;
      break;
    }

  if(maybe_unlucky)
    for(int i=0; i<n; ++i)
      if(b[i] >= a[i]) {
        cout << "NO";
        return 0;
      }

  cout << "YES";

  return 0;
}
