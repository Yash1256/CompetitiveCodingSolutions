/*
In this problem, we need to find the minimum possible price such that price⋅n≥sum, where sum is the sum of all ai. price equals to ⌈sum/n⌉, where ⌈x/y⌉ is x divided by y rounded up.
*/

// important ceil(x/y)
// x/y + ((x%y)!=0)
// (x+y-1)/y

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
	int n, i, j, _ip,sum=0; cin >> n;
	for(i=0;i<n;++i) cin >> _ip, sum += _ip;
	/*
	if(sum%n==0) {
		cout << sum/n << endl;
		return;
	}
	cout << (sum+(n - sum%n))/n << endl;
	*/

	cout << (int)ceil(sum/(float)n) << endl;
	
	return;
}

void solve1() {
	int n, i, j, _ip,sum=0; cin >> n;
	for(i=0;i<n;++i) cin >> _ip, sum += _ip;
	cout << (sum+n-1)/n << endl;
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
    		solve1();
}	