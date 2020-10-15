#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    fastIO;
    string s;
    getline(cin, s);
    int l = s.length();
    int n = l - 2 * count(s.begin(), s.end(), 'a');
    cout << ((n < 0) ? l : l - (n + 1));
    return 0;
}