#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int t; cin >> t;
  while(t--) {
    unsigned long long a1; cin >> a1;
    unsigned long long b1; cin >> b1;
    unsigned long long x; cin >> x;
    unsigned long long y; cin >> y;
    unsigned long long n1; cin >> n1;
    unsigned long long a2 = a1;
    unsigned long long b2 = b1;
    unsigned long long n2 = n1;

    unsigned long long dd1 = ((a1-x) < n1) ? (a1-x) : n1;
    a1 -= dd1;
    n1 -= dd1;
    if(n1 > 0) {
      dd1 = ((b1-y) < n1) ? (b1-y) : n1;
      b1 -= dd1;
    }

    unsigned long long dd2 = ((b2-y) < n2) ? (b2-y) : n2;
    b2 -= dd2;
    n2 -= dd2;
    if(n2 > 0) {
      dd2 = ((a2-x) < n2) ? (a2-x) : n2;
      a2 -= dd2;
    }

    unsigned long long ans1 = a1*b1;
    unsigned long long ans2 = a2*b2;

    cout << (ans1<ans2 ? ans1 : ans2) << endl;
  }
  return 0;
}
