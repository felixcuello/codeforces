#include <iostream>
#include <set>

using namespace std;

bool valid_pos(int n, set<pair<int,int> >& o, int r, int c) {
  if(r < 1) return false;
  if(c < 1) return false;
  if(r > n) return false;
  if(c > n) return false;
  if(o.find(make_pair(r,c)) != o.end()) return false;

  return true;
}

int main() {
  int n,k,qr,qc;
  cin >> n >> k >> qr >> qc;

  set<pair<int,int> > o;
  while(k--) {
    int r,c;
    cin >> r >> c;
    o.insert(make_pair(r,c));
  }

  long ans = 0;

  for(int r=qr+1; valid_pos(n,o,r,qc); ++r) ++ans; // up
  for(int r=qr-1; valid_pos(n,o,r,qc); --r) ++ans; // down
  for(int c=qc+1; valid_pos(n,o,qr,c); ++c) ++ans; // right
  for(int c=qc-1; valid_pos(n,o,qr,c); --c) ++ans; // left

  for(int r=qr+1,c=qc+1; valid_pos(n,o,r,c); ++r,++c) ++ans; // up-right
  for(int r=qr-1,c=qc+1; valid_pos(n,o,r,c); --r,++c) ++ans; // down-right
  for(int r=qr+1,c=qc-1; valid_pos(n,o,r,c); ++r,--c) ++ans; // up-left
  for(int r=qr-1,c=qc-1; valid_pos(n,o,r,c); --r,--c) ++ans; // down-left

  cout << ans;

  return 0;
}

