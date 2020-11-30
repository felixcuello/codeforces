#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int main() {
  int n,m;
  cin >> n >> m;

  vector<bitset<600> > topics;
  for(int i=0; i<n; ++i) {
    string s;
    cin >> s;
    topics.push_back(bitset<600>(s));
  }

  int max_two = 0;
  int ts = topics.size();
  for(int i=0; i<ts; ++i) {
    int cur_two = 0;
    for(int j=i; j<ts; ++j) {
      cur_two = (topics[i] | topics[j]).count();
      if(cur_two > max_two)
        max_two = cur_two;
    }
  }

  int teams = 0;
  for(int i=0; i<ts; ++i)
    for(int j=i; j<ts; ++j)
      if((topics[i] | topics[j]).count() >= max_two)
        ++teams;

  cout << max_two << endl;
  cout << teams << endl;
}
