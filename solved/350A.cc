#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int n,m;
  cin >> n >> m;

  int a = 500;
  int v = -1;
  while(n--) {
    int e;
    cin >> e;

    if(e<a) a = e;
    if(e>v) v = e;
  }

  while(2*a > v)
    ++v;

  int b = 500;
  while(m--) {
    int e;
    cin >> e;
    if(e<b) b = e;
  }

  if(v >= b) {
    cout << -1;
    return 0;
  }

  cout << v;

  return 0;
}
