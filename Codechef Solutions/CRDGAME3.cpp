#include<iostream>
using namespace std;
int main()
{
    long long int test;
    cin>>test;
    while(test!=0)
    {
        long long int c,r,rickc=0,chefc=0;
        cin>>c>>r;
        chefc=c/9;
        rickc=r/9;
        if((c%9)>0)
        {
            chefc+=1;
        }
        if((r%9)>0)
        {
            rickc+=1;
        }
        if(chefc<rickc)
        {
            cout<<0<<" "<<chefc<<"\n";
        }
        else if(chefc>rickc)
        {
            cout<<1<<" "<<rickc<<"\n";
        }
        else if(chefc==rickc)
        {
            cout<<1<<" "<<rickc<<"\n";
        }
        test-=1;
    }
    return 0;
}
