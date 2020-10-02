#include<bits/stdc++.h>
using namespace std;

int main()
{
int t, k;
cin>>t;
while(t--)
{
	string s;
	cin>>s;
	int c=0;
	for(int i=0;i<s.length()-1;i++)
	{
	    if((s[i]=='0'&&s[i+1]=='1')||(s[i]=='1'&&s[i+1]=='0'))
	        c++;
	}
	cout<<(c>2?"non-uniform":"uniform")<<endl;
}
return 0;
}
