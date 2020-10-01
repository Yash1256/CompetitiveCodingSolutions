#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    string str;
    cin >> str;
    string ch;
    cin >> k;
    vector<char> small_alpha;
    for (int i = 0; i < 26; i++)
        small_alpha.push_back('a' + i);
    vector<char>::iterator low_1;
    for (int i = 0; i < n; i++) {
        if (isalpha(str[i]) != 0) {
            if (isupper(str[i])) {
                str[i] = str[i] + 32;
                low_1 = lower_bound(small_alpha.begin(), small_alpha.end(), str[i]);
                int found = (low_1 - small_alpha.begin());
                found += k;
                str[i] = small_alpha[found % 26];
                str[i] = str[i] - 32;
            } else {
                low_1 = lower_bound(small_alpha.begin(), small_alpha.end(), str[i]);
                int found = (low_1 - small_alpha.begin());
                found += k;
                str[i] = small_alpha[found % 26];
            }
        }
    }
    cout << str;
    return 0;
}
