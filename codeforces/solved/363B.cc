#include <vector>
#include <iostream>

using namespace std;

typedef unsigned long long ull;

int main() {
  int n, k;
  cin >> n >> k;

  int minb = 0;
  ull minh = 0;
  vector<int> h;
  for(int i=0; i<n; ++i) {
    int e;
    cin >> e;
    if(i<k)
      minh += e;
    h.push_back(e);
  }


  int ans = 1;
  int current = minh;
  for(int i=1; i<=n-k; ++i) {
    // cout << "remove->" << i-1 << " add->" << i+k-1 << endl;
    current = current - h[i-1] + h[i+k-1];
    if(current < minh) {
      current = minh;
      ans = i+1;
    }
    // cout << "i=" << i << "  current=" << current << "  vs  " << minh << endl;
  }

  cout << ans;
}