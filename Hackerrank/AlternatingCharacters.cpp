#include <bits/stdc++.h>

#define fifo                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back
#define REP(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        int counter = 0;
        string str;
        cin >> str;
        for (auto it = str.begin(); it != str.end(); ++it) {
            if (*it == *(it + 1)) {
                while (1) {
                    if (*it == *(it + 1))
                        counter++;
                    else
                        break;
                    it = next(it);
                }
            }
        }
        cout << counter << endl;
    }
}
