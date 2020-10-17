#include <iostream>
#include <vector>
#include <algorithm>

typedef unsigned long long ull;

using namespace std;

int main() {
  // starting queue
  vector<int> q;
  q.push_back(0); q.push_back(1); q.push_back(2); q.push_back(3); q.push_back(4);

  // parser
  vector<vector<int> > m;
  for(int i=0; i<5; ++i) {
    vector<int> row;
    for(int j=0; j<5; ++j) {
      int e;
      cin >> e;
      row.push_back(e);
    }
    m.push_back(row);
  }

  ull max = 0;
  do {
    ull ans = 0;

    for(int j=0; j<4; ++j)
      for(int i=j; i<4; i+=2)
        ans += m[q[i]][q[i+1]] + m[q[i+1]][q[i]];

    if(ans > max)
      max = ans;
  } while(next_permutation(q.begin(), q.end()));

  cout << max << endl;

  return 0;
}
