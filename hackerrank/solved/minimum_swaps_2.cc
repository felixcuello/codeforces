#include <vector>
#include <iostream>

using namespace std;

vector<string> split_string(string);

int main() {
  int n;
  cin >> n;
  vector<int> v;
  while(n--) {
    int e;
    cin >> e;
    v.push_back(e);
  }

  int count = 0;
  bool swap = true;
  int vs = v.size();
  while(swap) {
    swap = false;
    for(int i=0; i<vs; ++i) {
      int pos_a = i;
      int pos_b = v[i]-1;
      //cout << "swap(" << pos_a << "," << pos_b << ")" << endl;
      if(v[i] > i+1) {
        int temp = v[pos_a];
        v[pos_a] = v[pos_b];
        v[pos_b] = temp;
        --vs;
        swap = true;
        ++count;
      }

      /*
      for(int i=0; i<4; ++i) {
        cout << v[i] << " ";
      }
      cout << endl;
      */
    }
  }
  cout << count;
  return 0;
}
