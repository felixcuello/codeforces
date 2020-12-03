#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main() {
  ifstream input;
  ofstream output;

  input.open("input.txt");
  output.open("output.txt");

  int n, m;
  input >> n >> m;

  int total = n+m;
  while(total--) {
    if(n>m) {
      if(n-- > 0)
        output << "B";
      if(m-- > 0)
        output << "G";
    } else {
      if(m-- > 0)
        output << "G";
      if(n-- > 0)
        output << "B";
    }
  }

  return 0;
}