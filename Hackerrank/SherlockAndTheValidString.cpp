//Question Link: https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem
//Solution By: https://www.hackerrank.com/fawadmirza32
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int a[26];
    memset(a,0,sizeof(a));
    for(auto x : s){
        a[x-'a']++;
    }
    //for(auto x : a) cout << x << " "; cout << endl;
    sort(a,a+26);
    //for(auto x : a) cout << x << " "; cout << endl;
    vector<int> v;
    for(auto x : a) if(x) v.push_back(x);
    //for(auto x : v) cout << x << " ";
    if(v[v.size()-1]-v[0]==0) cout << "YES";
    else if(accumulate(v.begin(),v.end(),0)==v.size()*v[0]) cout << "YES";
    else if(accumulate(v.begin()+1,v.end(),v[0]-1)==v[1]*(v.size()-1))
            cout << "YES";
    else if(accumulate(v.begin(),v.end()-1,v[v.size()-1]-1)==v[0]*(v.size()))
            cout << "YES";    
    else cout << "NO";
}

