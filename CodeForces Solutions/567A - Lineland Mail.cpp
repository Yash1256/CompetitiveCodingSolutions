#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define endl "\n"
#define all(x) x.begin(), x.end()
#define deb(x) cout << #x << " --> " << (x) << endl
#define pb push_back
#define fastio               \
    ios::sync_with_stdio(0); \
    cout.tie(0);             \
    cin.tie(0)
#define INF (int)1e9
#define mod 1000000007  // 1e9 + 7
#define ps(x, y) fixed << setprecision(y) << x
#define print(v)                       \
    for (auto x : v) cout << x << " "; \
    cout << endl

void solve() {
    int n;
    cin >> n;
    int i, a[n];
    for (i = 0; i < n; ++i) cin >> a[i];
    // for the 0th element
    cout << abs(a[0] - a[1]) << " " << abs(a[0] - a[n - 1]) << endl;

    for (i = 1; i < n - 1; ++i) {
        cout << min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1])) << " " << max(abs(a[i] - a[0]), abs(a[i] - a[n - 1])) << endl;
    }

    // for the last element
    cout << abs(a[n - 2] - a[n - 1]) << " " << abs(a[0] - a[n - 1]) << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    fastio;
    int _t;
    // cin >> _t;
    // while(_t--)
    solve();
}