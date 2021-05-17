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
    while(T--) {
        string N;
        cin >> N;

        int num = stoi(N);
        int ans = 0;

        for (int i=0; i<N.size(); i++) {
            if (N[i]!='0' && num%(N[i]-'0')==0)
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}