#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>

typedef long long ll;
typedef unsigned long long ull;

#define __sieve(n) vector<long> __sieve_mtx(n, true); vector<long> __primes; \
  for(long p=2; p<n;++p) { \
    if(__sieve_mtx[p] == false) continue; \
    __primes.push_back(p); \
    for(long i=p*p; i<n; i+=p) \
      __sieve_mtx[i] = false; \
  }

using namespace std;

int main() {
  vector<vector<char> > matrix;
  for(int row=0; row<4; ++row) {
    string s;
    cin >> s;
    int ss = s.size();
    vector<char> rowv;
    for(int col=0; col<ss; ++col)
      rowv.push_back(s[col]);
    matrix.push_back(rowv);
  }

  for(int row=0; row<3; ++row)
    for(int col=0; col<3; ++col) {
      int a =(matrix[row][col] == '#') + (matrix[row][col+1] == '#') + (matrix[row+1][col] == '#') + (matrix[row+1][col+1] == '#');
      int b =(matrix[row][col] == '.') + (matrix[row][col+1] == '.') + (matrix[row+1][col] == '.') + (matrix[row+1][col+1] == '.');
      if(a == 3 || b == 3 || a == 4 || b == 4) {
        cout << "YES";
        return 0;
      }
    }

  cout << "NO";

  return 0;
}






