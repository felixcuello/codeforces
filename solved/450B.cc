#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
#include <unistd.h>

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

#define MOD 1000000007

ll calc(ll x) {
  return x < 0 ? x + MOD : x;
}

ll calcans(vector<ll>& solution, ll n) {
  return solution[(n-1)%6];
}

int main() {
  ull a,b,n; cin >> a >> b >> n;

  vector<ll> solution(7);
  solution[0] = calc(a);
  solution[1] = calc(b);
  solution[2] = calc(solution[1]-solution[0]);
  solution[3] = calc(-solution[0]);
  solution[4] = calc(-solution[1]);
  solution[5] = calc(-(solution[1]-solution[0]));

  cout << calcans(solution, n);

  return 0;
}
