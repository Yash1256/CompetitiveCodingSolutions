#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define int long long
#define endl "\n"
#define all(x) x.begin(), x.end()
#define deb(x) cout << #x << " --> " << (x) << endl
#define pb push_back
#define mod 1000000007  // 1e9 + 7
#define prec(x, y) fixed << setprecision(y) << x
#define print(v)                       \
    for (auto x : v) cout << x << " "; \
    cout << endl

bool f(int a, int b) { return a > b; }

void solve() {
    int i, j, n;
    cin >> n;
    int a[n], sum = 0;
    for (i = 0; i < n; ++i) cin >> a[i], sum += a[i];
    sort(a, a + n, f);
    int mine = 0;
    for (i = 0; i < n; ++i) {
        mine += a[i];
        if (mine > sum - mine) break;
    }
    cout << i + 1 << endl;
}

int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int _t = 1;
    // cin >> _t;
    while (_t--)
        solve();
}