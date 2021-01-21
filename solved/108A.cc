#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  vector<pair<string, bool> > hours;
  for(int ha=0; ha<=2; ha++) {
    string temp;
    temp.push_back('0' + ha);
    for(int hb=0; hb<=9; hb++) {
      if(ha == 2 && hb >= 4) continue; // can't have 24:xx
      temp.push_back('0' + hb);
      temp.push_back(':');
      for(int ma=0; ma <= 5; ma++) {
        temp.push_back('0' + ma);
        for(int mb=0; mb <= 9; mb++) {
          temp.push_back('0' + mb);
          if(ha == mb && hb == ma)
            hours.push_back(make_pair(temp, true));
          else
            hours.push_back(make_pair(temp, false));
          temp.pop_back();
        }
        temp.pop_back();
      }
      temp.pop_back();
      temp.pop_back();
    }
    temp.pop_back();
  }

  string h; cin >> h;
  bool found = false;
  int pos=0;
  int hs = hours.size();
  for(; pos<hs; pos++)
    if(hours[pos].first == h) break;

  pos = (pos+1) % hs;

  while(!found) {
    if(hours[pos].second == true) {
      cout << hours[pos].first;
      found = true;
    }
    pos = (pos+1) % hs;
  }
}