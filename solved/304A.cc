#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
#include <unistd.h>

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main() {
  ull n;
  cin >> n;

  ull ans = 0;
  for(ull a=1; a<=n; ++a)
    for(ull b=a; b<=n; ++b) {
      ull c = pow(a*a+b*b, 0.5);
      if(c>n)
        continue;
      if(c>=b && c>=a && (a*a+b*b == c*c))
        ++ans;
    }

  cout << ans;

  return 0;
}
