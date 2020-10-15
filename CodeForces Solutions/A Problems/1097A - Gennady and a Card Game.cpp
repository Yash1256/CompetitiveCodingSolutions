#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string tc, hc[5];
    getline(cin, tc);
    int f = 0;
    for (int i = 0; i < 5; i++)
    {
        if (i < 5 - 1)
        {
            getline(cin, hc[i], ' ');
        }
        else
        {
            getline(cin, hc[i]);
        }
    }
    for (int i = 0; i < 5; i++)
    {
        if (tc[0] == hc[i][0] || tc[1] == hc[i][1])
        {
            f++;
            break;
        }
    }
    if (f)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
