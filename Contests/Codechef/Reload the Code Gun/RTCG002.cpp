#include <iostream>
#include <map>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    map<char, int> mp;
    mp['D'] = 238;
    mp['T'] = 244;
    mp['M'] = 138;
    mp['B'] = 279;
    mp['C'] = 186;

    string S;
    cin >> S;

    int cal = 0;
    for (int i=0; i<S.size(); i++)
        cal += mp[S[i]];
    
    cout << cal/50 << "\n";

    cal = cal - (cal/50)*50;

    cout << cal/5 << "\n";

    cal = cal - (cal/5)*5;

    cout << 2*cal << "\n";
    return 0;
}