#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  set<int> keys;
  map<int,int> freq;
  while(n--) {
    int e;
    cin >> e;
    if(e==5 || e==7) { //IMPOSSIBLE
      cout << -1;
      return 0;
    }
    ++freq[e];
    keys.insert(e);
  }

  vector<vector<int> > tuples;

  vector<int> temp;
  temp.clear(); temp.push_back(1); temp.push_back(2); temp.push_back(4); tuples.push_back(temp);
  temp.clear(); temp.push_back(1); temp.push_back(2); temp.push_back(6); tuples.push_back(temp);
  temp.clear(); temp.push_back(1); temp.push_back(3); temp.push_back(6); tuples.push_back(temp);

  vector<vector<int> > ans;
  int temps = temp.size();
  for(int i=0; i<temps; ++i)
    while(freq[tuples[i][0]] && freq[tuples[i][1]] && freq[tuples[i][2]]) {
      freq[tuples[i][0]]--;
      freq[tuples[i][1]]--;
      freq[tuples[i][2]]--;
      ans.push_back(tuples[i]);
    }

  if(freq[1] || freq[2] || freq[3] || freq[6]) {
    cout << -1;
    return 0;
  }

  int anss = ans.size();
  for(int i=0; i<anss; ++i)
    cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;

  return 0;
}
