#include<stdio.h>
#include<string.h>
#include<time.h>

#define MAX_LIMIT 10

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

void heapify(int arr[], int n, int i) 
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
      largest = left;

    if (right < n && arr[right] > arr[largest])
      largest = right;

    if (largest != i) 
    {
      swap(&arr[i], &arr[largest]);
      heapify(arr, n, largest);
    }
}

  void heap_sort(int arr[], int n) 
  {
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--) 
    {
      swap(&arr[0], &arr[i]);
      heapify(arr, i, 0);
    }
  }
  
int partition(int arr[], int l, int h) 
{ 
    int pivot=arr[h]; 
    int i=(l-1);  
  
    for (int j=l;j<=h-1;j++) 
    { 
        if (arr[j]<pivot) 
        { 
            i++;  
            swap(&arr[i],&arr[j]); 
        } 
    } 
    swap(&arr[i+1],&arr[h]); 
    return (i+1); 
} 

void quick_sort(int arr[], int l, int h) 
{ 
    if (l<h) 
    { 
        int pi=partition(arr,l,h); 
        quick_sort(arr,l,pi-1); 
        quick_sort(arr,pi+1,h); 
    } 
} 

void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1=m-l+1; 
    int n2=r-m; 
    int L[n1],R[n2]; 

    for (i=0;i<n1;i++) 
        L[i]=arr[l+i]; 
    for (j=0;j<n2;j++) 
        R[j]=arr[m+1+j]; 
  
    i=0;  
    j=0; 
    k=l;  
    while (i<n1 && j<n2) 
    { 
        if (L[i]<=R[j]) 
        { 
            arr[k]=L[i]; 
            i++; 
        } 
        else
        { 
            arr[k]=R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i<n1) 
    { 
        arr[k]=L[i]; 
        i++; 
        k++; 
    } 
    while (j<n2)
    { 
        arr[k]=R[j]; 
        j++; 
        k++; 
    } 
} 

void merge_sort(int arr[], int l, int r) 
{ 
    if (l<r) 
    { 
        int m=l+(r-l)/2;  
        merge_sort(arr, l, m); 
        merge_sort(arr, m + 1, r); 
        merge(arr, l, m, r); 
    } 
} 


void insertion_sort(int arr[],int len)
{
    int j,k;
    for(int i=1;i<len;i++)
    {
        k=arr[i];
        j=i-1;
        while( j>=0 && arr[j]>k )
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=k;
    }
}
    
int print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int size,var;
    printf("Enter the size of array ::");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array ::");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n| Enter :: '1' to use heap sort      |\n");
    printf("| Enter :: '2' to use insertion sort |\n");
    printf("| Enter :: '3' to use merge sort     |\n");
    printf("| Enter :: '4' to use quick sort     |\n");
    printf("\n#Enter the number respective to the sorting algorithm to be used :: ");
    scanf("%d",&var);

    switch(var)
    {
        case 1 :
                heap_sort(arr, size);
                break;

        case 2 :
                insertion_sort(arr, size);
                break;

        case 3:
                merge_sort(arr, 0,size-1);
                break;

        case 4:
                quick_sort(arr, 0,size-1);
                break;
        default:
            printf("entered wrong choice");
    }

    printf("\nSorted array is :: ");
    print_array(arr,size);
    printf("\n");
    return 0;
}