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
  map<int, int> freq;
  freq[25] = 0;
  freq[50] = 0;

  int n;
  cin >> n;
  while(n--) {
    int b;
    cin >> b;

    if(b == 25)
      ++freq[25];

    if(b == 50) {
      --freq[25];
      if(freq[25] < 0) {
        cout << "NO";
        return 0;
      }
      ++freq[50];
    }

    if(b == 100) {
      if(freq[50] > 0 && freq[25] > 0) {
        --freq[50];
        --freq[25];
        if(freq[50] < 0 || freq[25] < 0) {
          cout << "NO";
          return 0;
        }
      } else if(freq[50] <= 0 && freq[25] > 0) {
        freq[25] -= 3;
        if(freq[25] < 0) {
          cout << "NO";
          return 0;
        }
      } else {
        cout << "NO";
        return 0;
      }
    }
  }

  cout << "YES";

  return 0;
}
