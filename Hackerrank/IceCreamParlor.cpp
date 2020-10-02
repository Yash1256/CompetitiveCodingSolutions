#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m,n,i,j;
        cin >> m;
        cin >> n;
        int a[n];
        
        for(i=0;i<n;i++)
            cin >> a[i];

        for (i=0;i<n;i++)
        {
            for (j=i+1;j<n;j++)
            {
                if(a[i]+a[j]==m)
                {
                    cout << i+1 << " " << j+1 << endl;
                    break;
                }
            }
        }
    }
}
