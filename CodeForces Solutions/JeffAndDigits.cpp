#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],f=0,z=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==5)
        {
            ++f;
        }
        else
        {
            ++z;
        }
        
    }

    int k=f/9;
    k=9*k;
    if(z==0)
    {
        printf("-1\n");
    }
    else
    {
        if(k<=0)
        {
            printf("0\n");
        }
        else
        {
            for(int i=0;i<k;i++)
            {
                printf("5");
            }
            for(int i=0;i<z;i++)
            {
                printf("0");
            }
            printf("\n");
        }
        
    }
    


}
