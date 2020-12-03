#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int s, n;
  cin >> s >> n;

  vector<pair<int, int> > dragons;
  while(n--) {
    int x,y;
    cin >> x >> y;
    dragons.push_back( make_pair(x, y) );
  }

  sort(dragons.begin(), dragons.end());

  for(vector<pair<int, int> >::iterator i=dragons.begin(); i!=dragons.end(); ++i) {
    if(s <= i->first) {
      cout << "NO";
      return 0;
    }

    s += i->second;
  }

  cout << "YES";

  return 0;
}
