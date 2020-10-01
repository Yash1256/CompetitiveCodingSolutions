#include <bits/stdc++.h>
using namespace std;

// TODO : Keep revisiting this question
/*

if n==1 :
	no solution exists

if n >= 2:
	2333333... (n digits) is the valid answer
	we could have other answers too like 
	3777777...
	
*/

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << "-1\n";
        } else {
            cout << "2";
            for (int i = 1; i < n; ++i) {
                cout << "3";
            }
            cout << "\n";
        }
    }
    return 0;
}