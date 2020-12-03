/*
 *  IDEA
 *  A number is divisible by 90 if it's divisible by 10 AND divisible by 9.
 *
 *  This ONLY happens if there's at least one "0" AND the sum of all the 5
 *  used to form the number is divisible by 9.
 *
 */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<class T> void vinspect(vector<T> v, char c=',') {
  int sv = v.size();
  for(int i=0; i<sv; ++i)
    if(i==0) cout << v[i]; else cout << c << v[i];
}

int main() {
  int n;
  cin >> n;

  int f = 0;
  vector<int> v;
  while(n--) {
    int e;
    cin >> e;
    if(e == 0)
      v.push_back(e);
    else
      f++;
  }

  // This one is tricky. Here I am counting the number of 'f'(ives) that
  // sum a multiple of 9. So for example
  // If you have f=35 that means you have f=27 , because f is divisible
  // by 9, but I have to substract 8   (35 % 9 == 8)
  f -= f%9;

  // SO here I put the maximum amount of 5s possible
  while(f--)
    v.push_back(5);

  if(v.empty())
    // If there are no 0s or no 5s, I can't form any number
    cout << "-1";
  else {
    // Fives must be the first
    sort(v.rbegin(), v.rend());
    int vs = v.size();
    if(v[0] == 0)
      // If the first number (after sort) is 0, then the number is just 0
      // no matter how many 0s I have later. And 0 is disivisible by 90
      cout << "0";
    else if(v[vs-1] == 5)
      // If the LAST element is a 5, then there are NO zeros. Therefore
      // there's no way to create a number divisible by 10
      cout << "-1";
    else {
      // If the number looks like   5 x x ... x x 0, then I must print it
      for(int i=0; i<vs; ++i)
        cout << v[i];
    }
  }

  return 0;
}
