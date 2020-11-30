#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n; cin >> n;

    int ans = 0, cb = 0, minb = 0;
    for(int i=0; i<n; ++i) {
        int e; cin >> e;

        if(e) ++ans;
        cb = min(cb, 0);
        cb += e ? 1 : -1;
        minb = min(cb, minb);
    }

    if(minb == 0)
        minb = 1;

    cout << ans - minb;

    return 0;
}