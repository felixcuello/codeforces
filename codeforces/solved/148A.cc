#include <iostream>

#define xxx(a,b) (a % b == 0)

using namespace std;

int main() {
  int k,l,m,n,d;

  cin >> k >> l >> m >> n >> d;

  int res = 0;
  for(int i=1; i<=d; ++i)
    if(xxx(i,k) || xxx(i,l) || xxx(i,m) || xxx(i,n))
      res++;

  cout << res;

  return 0;
}
