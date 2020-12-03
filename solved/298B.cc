#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <math.h>

using namespace std;

int main() {
  int t;
  string path;
  int sx, sy, ex, ey;

  cin >> t >> sx >> sy >> ex >> ey >> path;

  unsigned long long dh = abs(sx - ex);
  unsigned long long dv = abs(sy - ey);

  int pl = path.length();
  int s=1;
  for(int i=0; i<pl; ++i, ++s, --t) {
    if(t < 0)
      break;
    char wind = path[i];
    if(wind == 'S' && (sy-1 >= -1000000000) && (abs(sy - 1 - ey) < dv))
      dv = abs(--sy - ey);

    if(wind == 'N' && (sy+1 <= 1000000000) && (abs(sy + 1 - ey) < dv))
      dv = abs(++sy - ey);

    if(wind == 'W' && (sx-1 >= -1000000000) && (abs(sx - 1 - ex) < dh))
      dh = abs(--sx - ex);

    if(wind == 'E' && (sx+1 <= 1000000000) && (abs(sx + 1 - ex) < dh))
      dh = abs(++sx - ex);

    if(sx == ex && sy == ey)
      break;
  }

  cout << (t<=0 ? -1 : s);

  return 0;
}
