/*
 * https://codeforces.com/problemset/problem/1400/A
 *
 * Solution for this one is pretty easy. The idea is that the given string has 2n-1 chars
 * so it's going to be always a string with an ODD number of bits. Therefore if you have a
 * string of size n it means that the constructed string has to be only similar to the
 * bit that it's in the middle:
 *
 * 0001000     2*4 - 1 = 11 bits
 *
 * The ONLY string that is going to be similar is 1111 because of this:
 *
 * 0001000
 * 1111          1st position
 *  1111         2nd position
 *   1111        3rd position
 *    1111       4th position
 */
#include <iostream>
#include <string>
#include <vector>
#include <bitset>

using namespace std;

typedef unsigned long long ull;

void process_case() {
  int n;
  string s;

  cin >> n >> s;
  char c = s[n-1];
  while(n--)
    cout << c;
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while(t--)
    process_case();
  return 0;
}
