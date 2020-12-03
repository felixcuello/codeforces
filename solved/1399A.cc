/*
 * https://codeforces.com/problemset?tags=-800
 *
 * if this is possible, then you could sort the array and compare them in order
 *
 * if all the elements | A(n) - A(n-1) | < 1   in a sorted array, then it's a YES
 * if it fails for any comparison, it's a NO
  */
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

typedef unsigned long long ull;

string play(vector<ull>& a) {
  sort(a.begin(), a.end());
  ull i = a.size();
  while(--i > 0)
    if(a[i] - a[i-1] > 1)
      return "NO";
  return "YES";
}

int main() {
  ull t;
  cin >> t;
  while(t--) {
    ull n;
    cin >> n;
    vector<ull> a;
    while(n--) {
      ull t;
      cin >> t;
      a.push_back(t);
    }

    cout << play(a) << endl;
  }
  return 0;
}
