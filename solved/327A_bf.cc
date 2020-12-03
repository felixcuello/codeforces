#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> v;
  for(int i=0; i<n; ++i) {
    int e; cin >> e;
    v.push_back(e);
  }

  long max = 0;
  for(int i=0; i<n; ++i)
    for(int j=i; j<n; ++j) {
      long sum = 0;
      for(int k=i; k<=j; ++k)
        sum += v[k] ^ 1;
      if(sum > max)
        max = sum;
    }

  cout << max;
  return 0;
}