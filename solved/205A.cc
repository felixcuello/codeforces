#include <iostream>
#include <vector>

typedef unsigned long long ull;

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<ull> x;

  ull mina = 2000000000;
  int posa = 0;
  for(int i=0; i<n; ++i) {
    ull e;
    cin >> e;
    x.push_back(e);
    if(e < mina) {
      mina = e;
      posa = i;
    }
  }

  int posb = -1;
  for(int i=0; i<n; ++i)
    if((x[i] == mina) && (i != posa))
      posb = i;

  if(posb == -1)
    cout << posa+1;
  else
    cout << "Still Rozdil";

  return 0;
}
