#include<stdio.h>

void main()
{
int ar[100],i,n,s=0,flag=0,c=0;
printf("\n Enter no. of elements "); // taking no. of elements for array
scanf("%d",&n);
printf("\n Enter the numbers "); // taking array as an input from user
//for loop for entering numbers  
for(i=0;i<n;i++)
{ scanf("%d",&ar[i]);
}
//loop for searching in array
printf("\n Enter the number to search ");
scanf("%d",&s);
for(i=0;i<n;i++)
{ if(s==ar[i])
  {flag=1;
  break;
  }
}
if(flag==1)
  printf("\n The number is present at position %d ",i+1);
else
  printf("\n The number is not present");

  return 0;
}
