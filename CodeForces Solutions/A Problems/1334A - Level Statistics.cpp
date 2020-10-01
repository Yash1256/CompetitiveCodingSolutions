// Make Ad-Hoc thinking faster relating it with mathematics
// delta p >=0 && delta c >=0 and delta p>=delta c

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
#define print(v)	  for(auto x : v) cout << x << " "; cout << endl;

bool solve(){
	int n, i, j, _ip; cin >> n;
	bool flag = true;
	int p=0, q=0, p1=0, q1=0;
	for(i=0; i<n; ++i) {
		cin >> p >> q;
		if(p < p1 || q < q1 || q-q1 > p-p1)
						flag = false;
		p1 = p;
		q1 = q;
	}
	return flag;
}

int32_t main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    int _t;
    cin >> _t;
    	while(_t--){
    		if(solve())
    			cout << "YES\n";
    		else
    			cout << "NO\n";
    	}
}
