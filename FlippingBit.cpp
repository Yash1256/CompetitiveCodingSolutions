#include <bits/stdc++.h>

#define fifo                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define pb push_back

using namespace std;

void invertBits(unsigned int num) {
    // calculating number of bits
    // in the number

    // Considering number to be 32 bit integer;
    bitset<32> b(num);

    // reversing the bits one by one
    for (int i = 0; i < 32; i++)
        b.flip(i);

    // converting bitset to number
    cout << b.to_ulong() << endl;
}

// Driver code
int main() {
    fifo;
    int tc = 1;
    cin >> tc;
    while (tc--) {
        unsigned int num;
        cin >> num;
        invertBits(num);
    }
    return 0;
}