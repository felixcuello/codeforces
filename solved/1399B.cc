/*
 * https://codeforces.com/problemset/problem/1399/B
 *
 * The idea is simple, you get the minimum of all elements when you
 * parse the input file
  */
#include <iostream>
#include <vector>

#define MAX (1000000000 + 1)
typedef unsigned long long ull;

using namespace std;

int main() {
  ull t;
  cin >> t;
  while(t--) {
    ull g,t;
    vector<ull> a,b;

    cin >> g;

    // Parser a
    ull min_a = MAX;
    for(ull i=0; i<g; ++i) {
      cin >> t;
      min_a = min(t,min_a);
      a.push_back(t);
    }

    // Parser b
    ull min_b = MAX;
    for(ull i=0; i<g; ++i) {
      cin >> t;
      min_b = min(t,min_b);
      b.push_back(t);
    }

    // Solution
    ull res = 0;
    for(ull i=0; i<g; ++i) {
      ull da = a[i] - min_a;
      ull db = b[i] - min_b;
      res += max(da,db);
    }

    cout << res << endl;
  }

  return 0;
}
