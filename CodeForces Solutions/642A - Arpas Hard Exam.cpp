#include <iostream>
using namespace std;
#define MOD 10

int __pow(int a, int b) {
    int ans = 1;
    while (b) {
        if (b & 1) ans = (ans * a) % MOD;  //whenever it is odd
        b /= 2;
        a = (a * a) % MOD;  // whenever it is even
    }
    return ans % MOD;
}

int main() {
    int n;
    cin >> n;
    int k = 8;
    // O(log n)
    // cout << __pow(8, n) << endl;

    // O(n)
    int ans = -1;
    if (n == 0) {
        ans = 1;
    } else if (n % 4 == 0) {
        ans = 6;
    } else if (n % 4 == 1) {
        ans = 8;
    } else if (n % 4 == 2) {
        ans = 4;
    } else if (n % 4 == 3) {
        ans = 2;
    }
    cout << ans << endl;
}