#include <bits/stdc++.h>

#define fifo                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back
#define REP(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    string subs = "010";
    vector<int> indx;
    size_t found = str.find(subs);
    while (found != string::npos) {
        indx.pb(found);
        found = str.find(subs, found + 1);
    }
    int answer = indx.size();
    if (indx.size() > 1) {
        for (int i = 0; i < indx.size() - 1; i++) {
            if ((abs(indx[i] - indx[i + 1]) - 2) == 0) {
                answer -= 1;
                i += 2;
            }
        }
    }
    cout << answer;
}
