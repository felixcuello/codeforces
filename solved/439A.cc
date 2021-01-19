#include <iostream>

using namespace std;

int main() {
  int n,d;
  cin >> n >> d;

  int devu = (n-1)*10;
  int jokes = (n-1)*2;
  for(int i=0; i<n; ++i) {
    int temp; cin >> temp;
    devu += temp;
  }

  if(devu > d) {
    cout << "-1";
  } else {
    jokes += (d-devu)/5;
    cout << jokes;
  }
  return 0;
}