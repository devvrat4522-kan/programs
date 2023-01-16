#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ans;
    cin>>a>>b;
    int i,r,f=0,s=0;
    for(i=a;i<=b;i++)
    {
        int j=i;
        while(j!=0)
        {
        r=j%10;
        if(r!=4 && r!=7)
        {
            f=1;
            break;
        }
        else
        {
            s++;
            cout<<r<<endl;
        }
        j=j/10;
        }
    }
    if(s==0)
    {
        cout<<"-1";
    }
    return 0;    
}