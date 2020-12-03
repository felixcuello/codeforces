#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n,m;
  cin >> n >> m;

  vector<int> v;
  for(int i=0; i<n; ++i) {
    int e;
    cin >> e;
    v.push_back(e);
  }

  int winner = 0;
  bool keep_going = true;
  while(keep_going) {
    keep_going = false;
    for(int i=0; i<n; ++i) {
      if(v[i]>0) {
        winner = i+1;
        keep_going = true;
      }
      v[i] -= m;
    }
  }

  cout << winner;
  return 0;
}
