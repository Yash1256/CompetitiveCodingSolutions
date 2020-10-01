/*
TODO : Change/Simplify your coding style
- checkout the three methods in this submission

- 5 wrong submissions 
- missed many test cases
*/

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
#define fr 			  first
#define se            second

void solve(){ // wrong
	int n, i, j, _ip; 
	int s, x, y; cin >> n >> s;
	// set <pair<int, int>> a;
	vector <pair<int, int>> a;
	for(i=0; i<n; ++i) {
		cin >> x >> y;
		if( (x*100 + y <= s*100) && y && !(x >= s)) {
			// a.insert(make_pair(x,y));
			a.push_back(make_pair(x,y));
		}
	}
	if(a.empty()) {
		cout << "-1\n";
		return;
	}
	int max_ = 0;
	for(auto &p : a) {
		max_ = max(max_, (100-p.second));
	}
	cout << max_ << "\n";
}

void solve1() { // correct
	int n, i, j, _ip; 
	int s, x, y; cin >> n >> s;
	vector <pair<int, int>> a(n);
	for(auto &x : a) cin >> x.fr >> x.se;
	int sw = -1;
	for(auto &x : a) {
		// if(x.fr < s && x.se) 
		if(x.fr*100+x.se <= s*100) {
			if(x.se)
			sw = max(sw, (100-x.se));
			else
			sw = max(sw, x.se);
		}
	}
	(sw!=-1) ? cout << sw : cout << "-1";
}

void solve2() { // the best submission
	int n, s, x, y, ans = -1; cin >> n >> s;
	while(n--) {
		cin >> x >> y;
		if(x * 100 + y <= s * 100)
			// amax(ans, y == 0 ? 0 : 100 - y);
			ans = max(ans, y == 0 ? 0 : 100 - y);
	}
	cout << ans << "\n";
}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    int _t;
    // cin >> _t;
    	// while(_t--)
    		// solve();
    		// solve1();
    		solve2();
}		