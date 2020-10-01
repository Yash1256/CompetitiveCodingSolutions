#include <bits/stdc++.h>
using namespace std;

void solve() {
    int i, j, k, n, _ip;
    cin >> n;
    map<int, int> hash;
    //  i gave a gift to _ip
    for (i = 1; i <= n; ++i) cin >> _ip, hash[_ip] = i;
    for (i = 1; i <= n; ++i) cout << hash[i] << " ";
    cout << "\n";
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