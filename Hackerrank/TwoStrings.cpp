#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc = 1;
    cin >> tc;
    while (tc--) {
        string str1, str2;
        cin >> str1 >> str2;
        vector<int> v1(26, 0), v2(26, 0);
        for (int i = 0; i < str1.length(); i++) {
            if (v1[str1[i] - 'a'] == 0)
                v1[str1[i] - 'a'] += 1;
        }
        for (int i = 0; i < str2.length(); i++) {
            if (v2[str2[i] - 'a'] == 0)
                v2[str2[i] - 'a'] += 1;
        }
        bool flag = false;
        for (int i = 0; i < 26; i++)
            if ((v1[i] & v2[i]) == 1)
                flag = true;
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        v1.clear();
        v2.clear();
    }
}
