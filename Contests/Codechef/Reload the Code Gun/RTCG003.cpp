#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string S, T;
    cin >> S >> T;
    
    int ans = 0;
    for (int i=0; i<S.size(); i++)
        if (S[i]!=T[i])
            ans++;
    
    cout << ans << "\n";
    return 0;
}