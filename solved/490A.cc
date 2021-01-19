#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> p, m, pe;
    for(int i=0; i<n; ++i) {
        int student; cin >> student;
        if(student == 1) p.push_back(i+1);
        if(student == 2) m.push_back(i+1);
        if(student == 3) pe.push_back(i+1);
    }

    int max = min(p.size(), min(m.size(), pe.size()));
    cout << max << endl;
    while(max--) {
        int a = p.back(); p.pop_back();
        int b = m.back(); m.pop_back();
        int c = pe.back(); pe.pop_back();
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}
