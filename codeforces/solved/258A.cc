#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  string b;
  cin >> b;

  int zeropos = -1;
  int bl = b.length();
  for(int i=0; i<bl; ++i)
    if(b[i] == '0') {
      zeropos = i;
      break;
    }

  if(zeropos == -1) {
    for(int i=0; i<bl-1; ++i)
      cout << b[i];
  } else {
    for(int i=0; i<bl; ++i) {
      if(i == zeropos)
        continue;
      cout << b[i];
    }
  }


  return 0;
}
