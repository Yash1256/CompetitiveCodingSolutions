// Small Logic - Easy (test case figurer)

// Obviously that both rectangles should completely touch by one of the sides. Otherwise, you can move them closer to each other so that the total height or total width decreases, and the other dimension does not change. Thus, there are only two options:

// The rectangles touch by width, we get the side of the square equal to max(2b,a),
// The rectangles touch by height, we get the side of the square equal to max(2a,b).
// Thus, the minimum side of the square is equal to the minimum of these two options. Then the answer is (min(max(2b,a),max(2a,b)))2.

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define int           long long
#define endl 		  "\n"
#define all(x) 		  x.begin(), x.end()
#define deb(x) 		  cout << #x << " --> " << (x) << endl
#define pb		 	  push_back              
#define mod 		  1000000007 // 1e9 + 7
#define prec(x,y)	  fixed << setprecision(y) << x
#define print(v)	  for(auto x : v) cout << x << " "; cout << endl

void solve(){
	int n, i, j, _ip; 
	cin >> i >> j;
	if(i>j) swap(i,j);
	cout << pow(max(2*i, j),2) << "\n";
}

int32_t main(){
	ios::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    int _t;
    cin >> _t;
    	while(_t--)
    		solve();
}