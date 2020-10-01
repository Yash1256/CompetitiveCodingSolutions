#include <bits/stdc++.h>

#define fifo                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back

using namespace std;

int main() {
    string str;
    cin >> str;
    int len = str.length();
    vector<char> temp;
    for (int i = 0; i < len; i++)
        temp.pb(str[i]);
    for (auto i = temp.begin(); i != temp.end();) {
        if (*i == *(i + 1)) {
            temp.erase(i);
            temp.erase(i);
            temp.shrink_to_fit();
            i = temp.begin();
        } else
            ++i;
    }
    if (temp.size() == 0)
        cout << "Empty String";
    else
        for (int i = 0; i < temp.size(); i++)
            cout << temp[i];
}
