#include <iostream>
#include <string>

using namespace std;

int main() {
  string a,b,x,y;
  cin >> a >> b;
  int al = a.length();
  int bl = b.length();
  int ml = max(al,bl);
  if(al <= bl) {
    for(int i=0; i<ml-al; ++i)
      x.push_back('0');
    for(int i=0; i<al; ++i)
      x.push_back(a[i]);
    y = b;
  } else {
    for(int i=0; i<ml-bl; ++i)
      y.push_back('0');
    for(int i=0; i<bl; ++i)
      y.push_back(b[i]);
    x = a;
  }

  for(int i=0; i<ml; ++i)
    cout << (x[i] == y[i] ? '0' : '1');
  return 0;
}
