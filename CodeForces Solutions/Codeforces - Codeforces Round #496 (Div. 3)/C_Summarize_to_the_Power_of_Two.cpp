#include <bits/stdc++.h>
// #include <stdio.h>
using namespace std;
#define ll long long
#define const ll mod = 1000000007;
// #define forn(n) for (int i = 0; i < n; ++i)
#define fora(ds) for (auto i : ds) // ds = data structure
#define FOR(x) for (auto it = x.begin(); it != x.end(); ++it)
#define forn(n) for (ll i = 0; i < n; i++)
#define forkn(i, k, n) for (ll i = k; i < n; i++)
#define forin(n) \
    for (ll i = n - 1; i >= 0; i--))
#define coutl cout << endl;
#define couts(val) cout << val << " "
#define mpii map<int, int>
#define mpsi map<string, int>
#define mpll map<ll, ll>
#define vci vector<int>
#define vcl vector<ll>
#define vcs vector<string>
#define paii pair<int, int>
#define vp vector<paii>
#define vc(type) vector<type>

bool power_2(ll num)
{
    if (num == 0)
        return true;
    while (!(num & 1))
        num >>= 1;
    if (num == 1)
        return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, count;
    cin >> n;
    vcl ar(n);
    mpll freq;
    vcl final_ar;

    forn(n)
    {
        cin >> ar[i]; // input
        ++freq[ar[i]];
    }
    count = 0;

    forn(n)
    {
        bool flag = true;
        forkn(j, 0, 32)
        {
            ll x = (1 << j) - ar[i];
            if (freq[x] && (freq[x] > 1 || (freq[x] == 1 && x != ar[i])))
                flag = false;
        }
        if (flag)
            ++count;
    }

    cout << count;

    return 0;
}