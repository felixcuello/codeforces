#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int s1,s2,s3;
  int a, b, c;
  cin >> s1 >> s2 >> s3;

  a = sqrt(s1*s3/s2);
  b = sqrt(s1*s2/s3);
  c = sqrt(s2*s3/s1);

  cout << 4*(a+b+c);

  return 0;
}
