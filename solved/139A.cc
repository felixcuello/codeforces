#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  vector<int> v;
  cin >> n;
  for(int i=0; i<7; ++i) {
    int e;
    cin >> e;
    v.push_back(e);
  }

  int d = 0;
  while(n>0)
    for(int i=0; i<7; ++i) {
      n -= v[i];
      d = i;
      if(n<=0)
        break;
    }

  cout << d+1;

  return 0;
}
