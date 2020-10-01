// this is an easy question but i failt miserably at it every time i attempt it

// #include <iostream>
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
// (1 + 2 + 4 + .... + 2^(k-1))*x = n
// x*(2^k - 1) = n


void solve(){
	ull n; cin >> n;	
	for(ull k=2; ; ++k) {
		if((n%((1<<k)-1)) == 0) {
			cout << (n/((1<<k) - 1)) << endl;
			break;
		}
	}
	return; 
}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    int _t;
    cin >> _t;
    	while(_t--)
    		solve();
}