#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n; cin >> n;
  vector<int> v(n);
  for(int i=0; i<n; i++)
    cin >> v[i];

  int best = false;
  int ans = 0;
  for(int i=0; i<n; ++i)
    if(v[i] == i)
      ans++;
    else
      best |= v[v[i]] == i;

  if(ans == n)
    cout << ans;
  else
    cout << (best ? ans+2 : ans+1);
}