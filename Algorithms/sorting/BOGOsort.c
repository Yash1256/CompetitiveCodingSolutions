#include<stdbool.h>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>

bool notsorted(int a[],int n)
{
    while (--n >=(1))
        if (a[n]<a[n - 1])
            return false;
    return true;
}
void shuffle(int a[],int n)
{
    int i,t,j;
    for (i=0;i<n;i++)
    {   
        t=a[i];
        j=rand() % n;   
        a[i]=a[j];
        a[j]=t;
    }
}
void BOGO(int a[], int n) 
{ 
    while (!notsorted(a,n)) 
        shuffle(a,n);       
} 
int main(){
    int n;
    printf("                BOGO SORT \n");
    printf("Enter how many values should the array consist of: \n");
    printf("Size :");
    scanf("%d",&n);
    int a[n];
    srand(time(0));
    
    printf("Enter the elements of the array: \n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\n");
    
    BOGO(a,n);  
    
    printf("The sorted array is: \n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
} 
