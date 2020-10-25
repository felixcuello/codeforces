// Paso de culo 997ms
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
  ifstream in;
  ofstream out;

  in.open("input.txt");
  out.open("output.txt");

  int n;
  in >> n;

  map<int, int> freq;
  map<int, vector<int> > pos;
  for(int i=0; i<2*n; ++i) {
    int c;
    in >> c;
    ++freq[c];
    pos[c].push_back(i);
  }

  // Check if we can divide in pairs
  for(map<int,int>::iterator i=freq.begin(); i!=freq.end(); ++i)
    if(freq[i->first] % 2) {
      out << -1;
      return 0;
    }


  // Print all the pairs
  for(map<int, vector<int> >::iterator i=pos.begin(); i!=pos.end(); ++i) {
    int sz = i->second.size();
    for(int j=0; j<sz; j+=2) {
      out << i->second[j]+1 << " " << i->second[j+1]+1 << endl;
    }
  }


  return 0;
}