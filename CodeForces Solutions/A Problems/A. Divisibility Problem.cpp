/**
*      Author : Master_Yash
*      Time   : 2020-10-01 16:47:44
**/

#include <algorithm>
#include <cassert>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std;

typedef long long ll;

void solve() {
    ll N, M;
    cin >> N >> M;
    cout << M - ((N % M) ? (N % M) : M) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}
