#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, k, ans, x;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> n >> k;
        if (n < k)
        {
            ans = k - n;
            n = k;
        }
        else if ((n + k) % 2)
        {
            ans++;
        }

        cout << ans << "\n";
    }
    return 0;
}