#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef unsigned long long ull;

int main() {
  // Sieve of Erathostenes
  vector<bool> p(100, true);
  for(int i=2; i<100; ++i)
    for(int j=i+i; j<100; j+=i)
      p[j] = false;

  int n,m;
  cin >> n >> m;

  for(int i=n+1; i<m; ++i) {
    if(p[i]) {
      cout << "NO";
      return 0;
    }
  }

  cout << (p[m] ? "YES" : "NO");

  return 0;
}
