#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>
#include <unistd.h>

#define pb push_back
#define pob push_back
#define mp make_pair
#define fore(i,a,b) for(int i=a,to=b;i<to;++i)

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

void solve() {
  int r,c; cin >> r >> c;
  char matrix[r][c];

  int ans = 0;
  set<int> obstacle_row;
  set<int> obstacle_col;

  for(int row=0; row<r; ++row) {
    for(int col=0; col<c; ++col) {
      cin >> matrix[row][col];
      if(matrix[row][col] == 'S') {
        obstacle_row.insert(row);
        obstacle_col.insert(col);
      }
    }
  }

  for(int row=0; row<r; ++row) {
    if(obstacle_row.count(row) > 0)
      continue;

    for(int col=0; col<c; ++col) {
      if(matrix[row][col] == '.') {
        matrix[row][col] = ' ';
        ++ans;
      }
    }
  }

  for(int col=0; col<c; ++col) {
    if(obstacle_col.count(col) > 0)
      continue;
    for(int row=0; row<r; ++row) {
      if(matrix[row][col] == '.') {
        matrix[row][col] = ' ';
        ++ans;
      }
    }
  }

  cout << ans;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  solve();

  return 0;
}
