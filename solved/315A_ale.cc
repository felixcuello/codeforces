#include<bits/stdc++.h>
using namespace std;

void solve() {
        int n; cin >> n;
        vector<int> cnt(1001);
        map<int, set<int>> mp;
        vector<int> cnt2(1001);
        for (int i = 0; i < n; i++) {
            int a, b; cin >> a >> b;
            mp[b].insert(a);
            if (a == b)
                cnt2[a]++;
            cnt[a]++;
        }
        int can = 0;
        for (int i = 1; i <= 1000; i++) {
            if (!cnt[i]) 
                continue;
            bool any = 0;
            for (int j = 1; j <= 1000 && !any; j++) 
                if (cnt[j] && i != j && mp[i].count(j)) {
                    can += cnt[i];
                    any = 1;
                }
            if (!any) 
                if (mp[i].count(i)) {
                    if (cnt2[i] == 1) {
                        can += cnt[i] - 1;
                    } else {
                        can += cnt[i];
                    }
                }
        }
        cout << n - can << '\n';
}

int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        solve();
        return 0;
}