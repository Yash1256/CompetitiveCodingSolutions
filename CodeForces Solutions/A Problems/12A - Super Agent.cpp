#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int f = 0;
    string mat, temp;
    for (int i = 0; i < 3; i++)
    {
        getline(cin, temp);
        mat += temp;
    }
    for (int i = 0; i < 4; i++)
    {
        if (mat[i] != mat[9 - i - 1])
        {
            f = 1;
            break;
        }
    }
    if (f)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }

    return 0;
}
