#include <bits/stdc++.h>

#define fifo                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back
#define tc     \
    int t = 1; \
    cin >> t;  \
    while (t--)

using namespace std;

int main() {
    tc {
        string str;
        cin >> str;
        list<char> list1;
        for (int i = 0; i < str.length(); i++)
            list1.pb(str[i]);
        list1.sort();
        list1.unique();
        cout << list1.size() << endl;
    }
}
