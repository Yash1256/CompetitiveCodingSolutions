#include <bits/stdc++.h>

using namespace std;
int comp(string s1,string s2)
{
    if(s1.length() == s2.length())
    {
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]==s2[i])
            {
                continue;
            }
            else
                return 1;
        }
        return 0;
    }
    else 
    {
        return 1;
    }
}

int main()
{
    int i,n,j;
    cin >> n;
    string s[n];
    for(i=0;i<n;i++)
        cin >> s[i];
    int t,count;
    cin >> t;
    string q[t];
    for(i=0;i<t;i++)
        cin >> q[i];
    for(j=0;j<t;j++)
    {
        count=0;
        for(i=0;i<n;i++)
        {
            if( comp(s[i],q[j]) == 0)
                count++;
        }
        cout << count << endl;
    }
}
