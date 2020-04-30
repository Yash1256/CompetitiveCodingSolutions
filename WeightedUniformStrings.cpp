#include <bits/stdc++.h>

using namespace std;

string pangrams(string s) {
    int ar[26];
    memset(ar, 0, sizeof(ar));
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            if (isupper(s[i]))
                s[i] += 32;
            ar[s[i] - 'a'] += 1;
        }
    }
    bool flag = true;
    for (int i = 0; i < 26; i++) {
        if (ar[i] == 0) {
            flag = false;
            break;
        }
    }
    if (flag)
        return "pangram";
    else
        return "not pangram";
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));
    string s;
    getline(cin, s);
    string result = pangrams(s);
    fout << result << "\n";
    fout.close();
    return 0;
}
