#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;

        int ans = 0;
        int n = S.size();
        for (int i=0; i<n/2; i++) {
            ans += abs(S[i]-S[n-i-1]);
        }
        cout << ans << "\n";
    }
    return 0;
}