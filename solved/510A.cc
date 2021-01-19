#include <iostream>

using namespace std;

int main() {
  int n, m; cin >> n >> m;

  int x = 0;
  for(int i=0; i<n; i++) {
    if(i%2==1) {
      if(x==0) {
        cout << ".";
      } else {
        cout << "#";
      }
    }

    int mm = m - 2*(i%2);
    for(int j=0; j<mm; j++) {
      if(i%2 == 0) {
        cout << "#";
      } else {
        cout << ".";
      }
    }

    if(i%2==1) {
      if(x==0) {
        cout << "#";
      } else {
        cout << ".";
      }
      x ^= 1;
    }
    cout << endl;
  }
  return 0;
}
