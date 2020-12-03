#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  long sum = 0;

  for(int i=0; i<n; ++i) {
    long e;
    cin >> e;
    sum += e;
  }

  // if the sum % n == 0, then the maximum number of elements that can be equal is just n
  //
  // otherwise we can always use ONE element to be the one that loses all the points to
  // give to others, so if you have
  //
  // -1 0 100  then you can transform that into -101 100 100, so it's n-2
  //
  // and that can be extended to others

  cout << ((sum % n == 0) ? n : n-1);

  return 0;
}
