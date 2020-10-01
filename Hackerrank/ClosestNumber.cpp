#include <bits/stdc++.h>

#define pb push_back

using namespace std;

int main() {
    map<int, vector<int>> mp;
    vector<int> v;
    int n, m;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        v.pb(m);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size() - 1; i++) {
        mp[abs(v[i + 1] - v[i])].pb(v[i]);
        mp[abs(v[i + 1] - v[i])].pb(v[i + 1]);
    }
    map<int, vector<int>>::iterator it;
    it = mp.begin();
    vector<int> x = it->second;
    for (int i = 0; i < x.size(); i++)
        cout << x[i] << " ";
}
