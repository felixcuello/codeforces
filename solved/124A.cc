#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main() {
  int n, a, b;
  cin >> n >> a >> b;

  int i = 0;
  while(i<=b && (n-i) > a)
    ++i;

  cout << i;

  return 0;
}
