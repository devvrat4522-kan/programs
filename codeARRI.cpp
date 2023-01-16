#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i=0,r[100],r1[100],f=0;
    cin>>n;
    while (n!=0)
    {
        r[i]=n%2;
        r1[i]=n%2;
        n/=2;
        i++;
    }
    i--;
    long long l=i;
    reverse(r,r+i+1);
    
    for(i=0;i<=l;i++)
    {
        if(r[i]!=r1[i])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}