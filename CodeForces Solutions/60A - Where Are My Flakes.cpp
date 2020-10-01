/*
Simple Adhoc - did not solve
Should have solved this
tags : limit adjustion
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int n, m; cin >> n >> m;
	string s, temp;
	int value;

	int l, r;
	l = 1;
	r = n;

	while(m--) {
		cin >> temp >> temp >> s >> temp >> temp >> value;
		if(s=="left") {
			r = min(r, value-1);
		}
		else {
			l = max(l, value+1);
		}
	}
	if(l>r) {
		cout << "-1\n";
	}
	else {
		cout << (r-l+1) << "\n"; 
	}
	return 0;
}