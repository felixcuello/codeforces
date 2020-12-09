#include <iostream>
#include <vector>

typedef unsigned long long ull;

using namespace std;

int main() {
  vector<ull> v;
  int i=3;
  v.push_back(0); v.push_back(1); v.push_back(1);
  while(v[i-1] + v[i-2] < 2000000000) {
    v.push_back(v[i-1]+v[i-2]);
    ++i;
  }

  int vs = v.size();

  ull n;
  cin >> n;

  for(int a=0; a<vs; ++a)
    for(int b=0; b<vs; ++b)
      for(int c=0; c<vs; ++c)
        if(v[a]+v[b]+v[c] == n) {
          cout << v[a] << " " << v[b] << " " << v[c];
          return 0;
        }

  cout << "I'm too stupid to solve this problem";

  return 0;
}
