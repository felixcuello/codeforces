#include <bits/stdc++.h>

using namespace std;

int main() {
    int h,m,s;
    char c;
    string ampm;
    cin >> h >> c >> m >> c >> s >> ampm;
    if(ampm == "PM" && h!=12) h += 12;
    if(ampm == "AM" && h==12) h -= 12;
    printf("%02d%c%02d%c%02d", h, c, m, c, s);
    return 0;
}
