#include <bits/stdc++.h>

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back
#define ll long long
#define mp make_pair
#define f first
#define s second
#define tc     \
    int t = 1; \
    cin >> t;  \
    while (t--)

using namespace std;

int main() {
    fastio;
    tc {
        string str, result;
        cin >> str;
        result = str;
        bool flg = false;
        do {
            if ((result > str) && (result != str)) {
                flg = true;
                break;
            }
        } while (next_permutation(result.begin(), result.end()));
        if (flg)
            cout << result << endl;
        else
            cout << "no answer" << endl;
    }
    return 0;
}
