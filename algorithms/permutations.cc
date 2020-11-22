#include <iostream>
#include <string>

using namespace std;

void permutations(string s, string result = "") {
  if(s.length() == 0) {
    cout << result << endl;
    return;
  }

  string x = s;
  for(int i=0; i<s.length(); ++i) {
    x.erase(x.begin() + i);
    permutations(x, result + s[i]);
    x = s;
  }
}

int main() {
  string s = "felix";
  permutations(s);
  return 0;
}