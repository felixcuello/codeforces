#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  unsigned long long h = 0;
  unsigned long long w = 0;
  while(n--) {
    int a;
    cin >> a;
    if(a/100 == 2)
      ++w;
    else
      ++h;
  }

  if(w % 2) {
    if(h < 2) {
      cout << "NO";
    } else {
      if(h % 2)
        cout << "NO";
      else
        cout << "YES";
    }
  } else {
    if(h % 2)
      cout << "NO";
    else
      cout << "YES";
  }

  return 0;
}
