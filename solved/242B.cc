#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
  vector<pair<int,int> > segments;
  int n, minl, maxr;

  minl = 1000000001;
  maxr = -1;
  cin >> n;
  for(int i=0; i<n; ++i) {
    int a,b;
    cin >> a >> b;
    if(a<minl)
      minl = a;
    if(b>maxr)
      maxr = b;

    segments.push_back(make_pair(a,b));
  }

  for(int i=0; i<n; ++i)
    if(segments[i].first == minl && segments[i].second == maxr) {
      cout << i+1;
      return 0;
    }

  cout << -1;

  return 0;
}
