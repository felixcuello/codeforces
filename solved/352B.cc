#include <iostream>
#include <map>
#include <set>

using namespace std;

#define _seen(x, s) (s.find(x) != s.end())

int main() {
  int n;
  cin >> n;

  set<int> mem, invalid;
  map<int, pair<int,int> > pos;

  int valid = 0;
  for(int i=0; i<n; ++i) {
    int e;
    cin >> e;

    if(_seen(e, invalid)) // no need to compute invalid numbers
      continue;

    if(_seen(e, mem)) {
      // SEEN element
      if(pos[e].second == 0) {
        // STORE second
        pos[e].second = i;
      } else {
        // Calculate sequence for   x....y....z
        int a = pos[e].second - pos[e].first;
        int b = i - pos[e].second;
        int max = (a>b) ? a : b;
        int min = (a<b) ? a : b;

        if(min % max) {
          invalid.insert(e);
          --valid;
        } else {
          pos[e].first = pos[e].second;
          pos[e].second = i;
        }
      }
    } else {
      // NEW element
      ++valid;
      pos[e].first = i;
      mem.insert(e);
    }
  }

  cout << valid << endl;
  for(map<int,pair<int, int> >::iterator i=pos.begin(); i!=pos.end(); ++i) {
    if(_seen(i->first, invalid))
      continue;
    int x = i->second.second - i->second.first;
    cout << i->first << " " << (x<0 ? 0 : x) << endl;
  }

  return 0;
}
