#include <bits/stdc++.h>
using namespace std;

//Fuck Ratings
//Once a Charas always a Charas

void solve() {
    int i, j, k, n;
    string s1, s2;
    cin >> s1 >> s2;
    for (i = 0; s1[i]; ++i) {
        cout << ((s1[i] - '0') ^ (s2[i] - '0'));
    }
    cout << endl;
}
int32_t main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int tc=1;
    // cin >> tc;
    while (tc--)
        solve();
    return 0;
}