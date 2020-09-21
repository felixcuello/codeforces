/*
 * https://codeforces.com/problemset/problem/275/A
 */
#include <iostream>
#include <vector>

using namespace std;

int pos(int row, int col) {
  return row*3 + col;
}

void swap(vector<int>& m, int row, int col) {
  if(row < 0 || row > 2 || col < 0 || col > 2)
    return;

  m[pos(row, col)] ^= 1;
}

void press(vector<int>& m, int row, int col) {
  // Pressing any of the lights will toggle it...
  swap(m, row, col);

  // ...and all side-adjacent lights
  swap(m, row-1, col); // up
  swap(m, row+1, col); // down
  swap(m, row, col-1); // left
  swap(m, row, col+1); // right
}

void show(vector<int> m) {
  for(int row=0; row<3; ++row) {
    for(int col=0; col<3; ++col)
      cout << m[pos(row, col)];
    cout << endl;
  }
}

int main() {
  vector<int> out(9,1);
  for(int row=0; row<3; ++row)
    for(int col=0; col<3; ++col) {
      int e;
      cin >> e;
      if(e % 2 == 1)
        press(out, row, col);
    }
  show(out);
  return 0;
}

