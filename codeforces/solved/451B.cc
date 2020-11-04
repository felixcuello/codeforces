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

int main() {
  ull n;
  cin >> n;
  vector<ull> v;
  vector<ull> v2;
  for(ull i=0; i<n; ++i) {
    ull e;
    cin >> e;
    v.push_back(e);
    v2.push_back(e);
  }

  sort(v2.begin(), v2.end());

  ull vs=v.size();

  // find (s)tart index
  int s=0;
  for(int i=0; i<vs; ++i)
    if(v[i] != v2[i]) {
      s = i;
      break;
    }

  // find (e)nd index
  int e=0;
  for(int i=vs-1; i>=0; --i)
    if(v[i] != v2[i]) {
      e = i;
      break;
    }

  // revert
  for(int i=s, j=e; i<j; ++i, --j) {
    ull temp = v[i];
    v[i] = v[j];
    v[j] = temp;
  }

  // check if it's sorted
  for(int i=0; i<vs; ++i)
    if(v[i] != v2[i]) {
      cout << "no";
      return 0;
    }

  cout << "yes" << endl << s+1 << " " << e+1;

  return 0;
}
