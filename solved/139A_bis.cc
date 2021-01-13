#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
#include <unistd.h>
#include <limits.h>
/* liits.h
 * LONG_MIN   -2147483647
 * LONG_MAX   2147483647
 * ULONG_MAX  4294967295
 * LLONG_MIN  -9223372036854775807
 * LLONG_MAX  9223372036854775807
 * ULLONG_MAX 18446744073709551615
 */

#define ceil(x,y) ((x + y - 1) / y)
#define fore(i,a,b) for(int i=a,to=b;i<to;++i)
#define __sieve(n) vector<long> __sieve_mtx(n, true); vector<long> __primes; for(long p=2; p<n;++p) { if(__sieve_mtx[p] == false) continue; __primes.push_back(p); for(long i=p*p; i<n; i+=p) __sieve_mtx[i] = false; }

#define pb push_back
#define pob push_back
#define mp make_pair

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

void solve() {
  int pages;
  cin >> pages;
  int days[7];
  for(int i=0; i<7; ++i)
    cin >> days[i];

  int i=0;
  while(true) {
    pages -= days[i];
    if(pages <= 0) break;
    i = (i+1) % 7;
  }
  cout << i+1;
}

int main() {
//  ifstream in;
//  ofstream out;

//  in.open("input.txt");
//  out.open("output.txt");
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  solve();

  return 0;
}
