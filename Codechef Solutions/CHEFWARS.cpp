#include<iostream>
using namespace std;
int main()
{
    long long int t,p,h;
    cin>>t;
    while(t--)
    {
        cin>>h>>p;
        while(h>0 && p!=0)
        {
            h=h-p;
            p=p/2;
        }
        if(h<=0)
        {
            cout<<1<<"\n";
        }
        else if(p==0)
        {
            cout<<0<<"\n";
        }
    }
    return 0;
}
