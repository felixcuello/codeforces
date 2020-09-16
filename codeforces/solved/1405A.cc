/*
  https://codeforces.com/problemset/problem/1405/A
  */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef unsigned long long ull;

int main() {
  ull t;
  cin >> t;
  while(t-- > 0) {
    ull as;
    cin >> as;

    vector<ull> a;
    while(as-- > 0) {
      ull x;
      cin >> x;
      a.push_back(x);
    }

    for(vector<ull>::reverse_iterator i = a.rbegin(); i != a.rend(); i++) {
      if(i != a.rbegin())
        cout << ' ';

      cout << *i;
    }

    cout << endl;
  }
  return 0;
}
