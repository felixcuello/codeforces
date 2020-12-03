#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main() {
  int n; cin >> n;
  map<int, int> opener;
  map<int, int> opened;
  map<int, int> self;
  for(int i=0; i<n; ++i) {
    int a,b; cin >> a >> b;
    if(a == b)
      ++self[a];

    ++opener[a];
    ++opened[b];
  }

  for(map<int, int>::iterator i=opener.begin(); i!=opener.end(); ++i) {
    int bottle = i->first;
    int amount = i->second;
    if(opened[bottle])
      n -= amount;
      if(self[bottle] >= 1 && opened[bottle] <= 1)
        n += 1;
  }

  cout << n;
  return 0;
}
