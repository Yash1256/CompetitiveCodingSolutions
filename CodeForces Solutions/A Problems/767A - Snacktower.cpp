#include <iostream>
#include <map>
using namespace std;

void solve() {
    int i, j, k, n;
    cin >> n;
    int curr = n;
    map<int, bool> have;
    for (i = 0; i < n; ++i) {
        cin >> k;
        have[k] = true;
        if (k == curr) {
            cout << curr << " ";
            for (j = curr - 1; j >= 1; --j) {
                if (have[j])
                    cout << j << " ";
                else
                    break;
            }
            curr = j;
        }
        cout << "\n";
    }
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