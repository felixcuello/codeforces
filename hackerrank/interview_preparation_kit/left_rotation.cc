#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,d;
    cin >> n >> d;
    vector<int> v;
    for(int i=0; i<n; ++i) {
        int e;
        cin >> e;
        v.push_back(e);
    }
    
    for(int source=d; source<n+d; ++source) {
        if(source != d)
            cout << " ";
        cout << v[source%n];        
    }
    
    return 0;
}

