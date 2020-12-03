/*
 * https://codeforces.com/problemset/problem/266/B
 */
#include <string>
#include <iostream>

using namespace std;

int main() {
  string queue;
  int n, s;
  cin >> n >> s >> queue;
  while(s--) {
    bool swaps = false;
    for(int i=0; i<n-1; ++i) {
      if(queue[i] == 'B' && queue[i+1] == 'G') {
        char x = queue[i];
        queue[i] = queue[i+1];
        queue[i+1] = x;
        ++i;
        swaps = true;
      }
    }

    if(!swaps)
      break;
  }

  cout << queue << endl;
  return 0;
}
