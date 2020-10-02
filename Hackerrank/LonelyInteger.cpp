#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n; 
    cin >> n;
    vector<int> A(n);
    for(int i=0;i<n;i++) 
        cin >> A[i];
    int num=0;
    
    for(int i=0;i<n;i++)
        if(count(A.begin(),A.end(),A[i])>1) 
            continue;
        else 
        { 
            num = A[i]; 
            break;
        }
    cout << num;
    return 0;
}
