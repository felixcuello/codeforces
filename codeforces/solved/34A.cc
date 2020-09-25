#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> s;
  while(n--) {
    int e;
    cin >> e;
    s.push_back(e);
  }

  int sS = s.size();
  int diff = abs(s[0] - s[sS-1]);
  int best_a = 0;
  int best_b = sS-1;

  for(int i=0; i<sS-1; ++i)
    if(abs(s[i]-s[i+1]) < diff) {
      diff = abs(s[i]-s[i+1]);
      best_a = i;
      best_b = i+1;
    }

  cout << best_a+1 << " " << best_b+1;
}
