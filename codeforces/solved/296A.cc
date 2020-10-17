#include <iostream>
#include <map>

using namespace std;

int main() {
  int n;
  cin >> n;

  map<char, int> f;
  for(int i=0; i<n; ++i) {
    int e;
    cin >> e;
    ++f[e];
  }

  int max = n/2 + n%2;
  for(map<char,int>::iterator i=f.begin(); i!=f.end(); ++i)
    if(i->second > max) {
      cout << "NO";
      return 0;
    }

  cout << "YES";
  return 0;
}
