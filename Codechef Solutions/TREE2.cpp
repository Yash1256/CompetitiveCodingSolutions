#include <iostream>
#include <algorithm>
using namespace std; 
int main()
{
    long long int test;
    cin>>test;
    while(test!=0)
    {
    	long long int summ,n,i;
	    cin>>n;
	    long long int ls[n];
	    for(i=0;i<n;i++)
	    {
	    	cin>>ls[i];
		}
	    for(i=0;i<n;i++)
		{
			if(ls[i]==0)
			{
				summ=0;
				break;
			}
			else
			{
				summ=1;
			}
		}
// 		cout<<summ<<"\n";
	    
	    sort(ls, ls+n);
	    
//	    for (int i = 0; i < n; ++i) 
//    	{
//    		cout << ls[i] << " ";
//		}
//		cout<<"\n";

		for (int i=n-1;i>=1;--i) 
    	{
    		if(ls[i-1]!=ls[i])
	            summ+=1;
	        else
	            continue;
		}
		cout<<summ<<"\n";
		
		test-=1;
	}
    return 0;
}
