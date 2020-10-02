#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,s=0,c=0;
    cin >> n >> k;
    int a[n];

    for(i=0;i<n;i++)
        cin >>a[i];

    sort(a,a+n);

    for(i=0;i<n;i++)
    {
        s+=a[i];
        if(s<=k)
            ++c;
        else
            break;
    }
    cout << c;
}
