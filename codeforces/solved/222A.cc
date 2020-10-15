#include <iostream>

using namespace std;

int main() {
  int n,k;

  cin >> n >> k;

  if(n==1) {
    cout << 0;
    return 0;
  }

  int pos = 1;
  int last = -1;
  for(int i=1; i<=n; ++i) {
    int e;
    cin >> e;

    // Explanation [*]
    if(last != e) {
      pos = i;
      if(i > k) {
        cout << -1;
        return 0;
      }
    }

    last = e;
  }

  cout << pos-1;

  return 0;
}


/*

  [*] Explanation

  The only way we can do this is if ALL elements in the list are the same after k

  3 4 1 [1] 1
  4 1 1 [1] 1
  1 1 1 [1] 1




  However

  3 1
  [3] 1 1

  It's impossible because we will start doing this:

  Iteration     Result
  0             3 1 1
  1             1 1 3
  2             1 3 1
  3             3 1 1    <<< repeating the sequence at iteration 0


  */
