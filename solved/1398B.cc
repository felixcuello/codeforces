/*
 *  https://codeforces.com/problemset/problem/1398/B
 *
 *  The way to solve it is that Alice always start getting the biggest sequence
 *  of 1s, therefore:
 *
 *  11110001110001101
 *  AAAA   BBB   AA B   => Alice 5  vs. Bob 4
 *
 *  So you have to count the sets of 1s , sort them, and make alice to pick every 2
 *  sets and sum all that _shrug_
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int play() {
  string b;
  vector<int> jugadas;

  cin >> b;
  int sum = 0;
  for(size_t i=0; i<=b.length(); ++i)
    if(i == b.length() || b[i] == '0') {
      if(sum > 0)
        jugadas.push_back(sum);
      sum = 0;
    } else
      sum++;

  sort(jugadas.begin(), jugadas.end());
  int alice = 0;

  for(int i=jugadas.size()-1; i >= 0; i-=2)
    alice += jugadas[i];

  return alice;
}

int main() {
  int t;
  cin >> t;
  while(t--)
    cout << play() << endl;

  return 0;
}
