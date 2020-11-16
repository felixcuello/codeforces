#include <iostream>

using namespace std;

void combinations(string s, string result = "") {
  int sl = s.length();
  int rl = result.length();
  if(sl == rl) {
    cout << result << endl;
    return;
  }

  for(int k=0; k<sl; ++k)
    combinations(s, result + s[k]);
}

int main() {
  string s = "abc";
  combinations(s);
  return 0;
}