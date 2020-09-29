#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {
  int n;
  cin >> n;

  set<pair<int,int> > points;
  map<int,int> max_x, min_x;
  map<int,int> max_y, min_y;

  while(n--) {
    int x,y;
    cin >> x >> y;
    points.insert(make_pair(x,y));

    map<int,int>::iterator _X = max_x.find(y);
    if(_X == max_x.end()) {max_x[y] = x;} else {if(x > max_x[y]) {max_x[y] = x;}}

    map<int,int>::iterator _x = min_x.find(y);
    if(_x == min_x.end()) {min_x[y] = x;} else {if(x < min_x[y]) {min_x[y] = x;}}

    map<int,int>::iterator _Y = max_y.find(x);
    if(_Y == max_y.end()) {max_y[x] = y;} else {if(y > max_y[x]) {max_y[x] = y;}}

    map<int,int>::iterator _y = min_y.find(x);
    if(_y == min_y.end()) {min_y[x] = y;} else {if(y < min_y[x]) {min_y[x] = y;}}
  }

  int ans = 0;
  for(set<pair<int, int> >::iterator i = points.begin(); i != points.end(); ++i) {
    int x = i->first;
    int y = i->second;

    if( x < max_x[y] && x > min_x[y] && y > min_y[x] && y < max_y[x] )
      ++ans;
  }

  cout << ans;

  return 0;
}
