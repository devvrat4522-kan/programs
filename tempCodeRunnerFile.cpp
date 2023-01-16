#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,extno;
    int t,i,j,f=0;
    cin>>t;
    while(t--)
    {
        long long extno=0;
        cin>>n;
        if(n<=10)
        {
            extno=n;
        }
        else
        {
            extno=10;
            for(i=11;i<=n;i++)
            {
                f=0;
                j=i;
                while(j!=0)
                {
                    
                    if(f<=1)
                    {
                    int r=j%10;
                    if(r>0)
                    {
                        f++;
                    }
                    j=j/10;
                    }
                    else
                    {
                        break;
                    }
                }
                if(f==1)
                {
                    extno++;
                }
            }
        }
        cout<<extno<<"\n";
    }
    return 0;
} 