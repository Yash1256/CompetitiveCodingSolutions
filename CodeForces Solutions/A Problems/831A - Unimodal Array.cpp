#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=3e2+10;
const int p=1e9+7;
int a[N];
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int i,n;
    cin>>n;
    for(i=0;i<n;i++)scanf("%d",a+i);
    i=0;
    while(a[i]<a[i+1]&&i<n)i++;
    while(a[i]==a[i+1]&&i<n)i++;
    while(a[i]>a[i+1]&&i<n)i++;
    if(i==n)cout<<"YES";
    else cout<<"NO";
    return 0;
}
