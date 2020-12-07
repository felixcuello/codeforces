/*
 * https://codeforces.com/problemset/problem/1398/A
 *
 * "For a given triangle to be a non-degenerate triangle, we only need to
 * be confirmed with the condition that the sum of smaller two sides should
 * be greater than the largest side. Because All the above three conditions
 * will be satisfied if the sum of the smaller two sides is greater than
 * the largest side."
 *
 * Since edges are SORTED, a non-degenerated triange can be formed with:
 *
 * a[0] + a[1] > a[n]
 *
 */
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; ++i) {
      int e;
      cin >> e;
      v.push_back(e);
    }

    if(v[0] + v[1] <= v[n-1])
      cout << "1 2 " << n << endl;
    else
      cout << "-1" << endl;
  }
  return 0;
}
