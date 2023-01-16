#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=1,m=1,i,sum=0;
    while(n>=0||m>=0)
    {
        sum=0;
        cin>>n>>m;
        if(n<=0||m<=0)
        {
            exit;
        }
        else if(n>m)
        {
            
            for(i=m;i<=n;i++)
            {
                cout<<i<<" ";
                sum =sum+i;
            }
        }
        else if(m>n)
         {
            for(i=n;i<=m;i++)
            {
                cout<<i<<" ";
                sum =sum+i;
            }
        }
        cout<<"sum ="<<sum;
        cout<<endl;
    }   
    return 0;
} 