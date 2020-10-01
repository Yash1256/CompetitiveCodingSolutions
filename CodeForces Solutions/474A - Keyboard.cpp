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

void solve() {
    int n, i, j, _ip;
    char idx;
    cin >> idx;
    string s;
    cin >> s;
    string key = "qwertyuiopasdfghjkl;zxcvbnm,./";
    map<char, int> hash;
    n = key.length();
    for (i = 0; i < n; ++i) {
        hash[key[i]] = i;
    }
    for (i = 0; i < s.size(); ++i) {
        char ch = s[i];
        cout << key[hash[ch] - (idx == 'R') + (idx == 'L')];
    }
    cout << "\n";
}

int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int _t;
    // cin >> _t;
    // 	while(_t--)
    solve();
}