#include <bits/stdc++.h>
using namespace std;

void solve() {
    int i, j, k, n;
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2) {
        cout << "-1\n";
        return;
    }

    cout << max(s1.length(), s2.length()) << "\n";
}
int32_t main() {
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // int tc; cin >> tc; while(tc--)
    solve();
    return 0;
}