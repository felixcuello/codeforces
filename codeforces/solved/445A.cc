#include <iostream>
#include <vector>
#include <string>

#define empty(c) (c == '.')

using namespace std;

void show(vector<string>& board, int n, int m) {
  // Output
  for(int row=0; row<n; ++row)
    cout << board[row] << endl;
}

void bfs(vector<string>& board, int row, int col, char current_color) {
  if(!empty(board[row][col]))
    return;

  board[row][col] = current_color;

  current_color = current_color == 'B' ? 'W' : 'B';
  if(row-1 >= 0 )
    bfs(board, row-1, col, current_color);
  if(row+1 < board.size())
    bfs(board, row+1, col, current_color);
  if(col-1 >= 0)
    bfs(board, row, col-1, current_color);
  if(col+1 < board[0].length())
    bfs(board, row, col+1, current_color);
}

int main() {
  int n,m;
  cin >> n >> m;
  vector<string> board;

  // parser
  for(int row=0; row<n; ++row) {
    string s;
    cin >> s;
    board.push_back(s);
  }

  // Put chessmates
  for(int row=0; row<n; ++row)
    for(int col=0; col<m; ++col) {
      if(!empty(board[row][col]))
         continue;
      bfs(board, row, col, 'B');
    }

  show(board, n, m);

  return 0;
}
