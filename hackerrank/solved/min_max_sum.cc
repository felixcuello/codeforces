#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;

vector<string> split_string(string);

pair<ull,ull> solve(vector<ull> v) {
    int vs = v.size();
    vector<ull> ans;
    for(int i=0; i<vs; ++i) {
            ull current = 0;
            for(int j=0; j<vs; ++j)
                if(j != i)
                    current += v[j];
            ans.push_back(current);
        }

    sort(ans.begin(), ans.end());

    return make_pair(ans[0], ans[vs-1]);
}

int main()
{
    vector<ull> a;
    for(int i=0; i<5; ++i) {
            ull e;
            cin >> e;
            a.push_back(e);
        }

    pair<ull,ull> result = solve(a);
    cout << result.first << " " << result.second;
    return 0;
}