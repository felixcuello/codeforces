#include <bits/stdc++.h>

using namespace std;

int main() {
  int s; cin >> s;
  map<string, int> freq;
  while(s--) {
    string t; cin >> t;
    freq[t]++;
  }

  int q; cin >> q;
  while(q--) {
    string temp; cin >> temp;
    cout << freq[temp] << endl;
  }

  return 0;
}
