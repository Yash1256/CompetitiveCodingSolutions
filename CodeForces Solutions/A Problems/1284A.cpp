#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ignore cin.ignore(1, '\n')
#define strinp(i, n, s)           \
    if (i < n - 1)                \
    {                             \
        getline(cin, s[i], ' ');  \
    }                             \
    else                          \
    {                             \
        getline(cin, s[i], '\n'); \
    }

int main()
{
    fastIO;
    int n, m, q, temp;
    cin >> n >> m;
    ignore;
    string s1[n], s2[m];
    for (int i = 0; i < n; i++)
    {
        strinp(i, n, s1)
    }
    for (int i = 0; i < m; i++)
    {
        strinp(i, m, s2)
    }
    cin >> q;
    while (q--)
    {
        cin >> temp;
        cout << s1[(temp - 1) % n] + s2[(temp - 1) % m] << endl;
    }

    return 0;
}