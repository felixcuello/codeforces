#include <iostream>

using namespace std;

int main() {
  int card[55] = {
                //A 2 3 4 5 6 7 8 9 10 J  Q  K  A
                  1,2,3,4,5,6,7,8,9,10,10,10,10,11,
                  1,2,3,4,5,6,7,8,9,10,10,10,10,11,
                  1,2,3,4,5,6,7,8,9,10,10,10,10,11,
                  1,2,3,4,5,6,7,8,9,10,10,   10,11
  };
  int n;
  cin >> n;
  n -= 10;

  int ans = 0;
  for(int i=0; i<55; ++i)
    if(card[i] == n)
      ++ans;

  cout << ans;

  return 0;
}

