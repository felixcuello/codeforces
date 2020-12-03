/*
 * https://codeforces.com/problemset/problem/1409/A
  */
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

ull play(ull a, ull b) {
  if(a == b)
    return 0;

  if(a > b) {
    ull c = a;
    a = b;
    b = c;
  }

  ull r = (b-a) % 10;

  if(r == 0)
    return (b-a)/10;
  else
    return (b-a-r)/10 + 1;
}

int main() {
  ull a, b, t;
  cin >> t;
  while(t-- > 0) {
    cin >> a >> b;
    cout << play(a,b) << endl;
  }

  return 0;
}
