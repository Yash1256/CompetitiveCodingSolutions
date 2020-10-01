#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<char> st;
    for (auto x : s) st.insert(tolower(x));
    st.size() == 26 ? cout << "YES" : cout << "NO";
}