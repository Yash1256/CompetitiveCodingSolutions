#include <bits/stdc++.h>

#define fifo                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back

using namespace std;

int main() {
    int tc = 1;
    cin >> tc;
    vector<char> v = {'h', 'a', 'c', 'k', 'e', 'r', 'r', 'a', 'n', 'k'};
    while (tc--) {
        string str;
        cin >> str;
        int j = 0;
        size_t found = str.find(v[j]);
        while (found != string::npos) {
            j++;
            found = str.find(v[j], found + 1);
        }
        if (j == v.size())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
