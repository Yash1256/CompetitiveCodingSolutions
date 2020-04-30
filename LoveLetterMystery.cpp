#include <bits/stdc++.h>

#define fifo                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back

using namespace std;

int main() {
    fifo;
    int queries = 1;
    cin >> queries;
    while (queries--) {
        int ctr = 0;
        string str;
        cin >> str;
        int len = str.length();
        for (int i = 0; i < len / 2; i++)
            ctr += abs(str[i] - str[len - i - 1]);
        cout << ctr << endl;
    }
}
