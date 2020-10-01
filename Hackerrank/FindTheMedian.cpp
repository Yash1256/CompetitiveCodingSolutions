#include <bits/stdc++.h>

#define pb push_back

using namespace std;

int main() {
    int n, m;
    vector<int> num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        num.pb(m);
    }
    sort(num.begin(), num.end());
    cout << num[n / 2];
}
