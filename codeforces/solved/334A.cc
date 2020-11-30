#include <iostream>
#include <vector>

using namespace std;

// IMPORTANT NOTE: n is even  (otherwise this can't be done)

void solve() {
  int n; cin >> n;

  for(int b=0; b<n; ++b) {
    for(int k=0; k<n/2; ++k) {  // Upsolving I should have done (k+k) < n
      if(k!=0)
        cout << " ";
      cout << 1 + k + n/2*b << " " << (n*n - k - n/2*b);
    }
    cout << endl;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);cout.tie(0);
  solve();

  return 0;
}
