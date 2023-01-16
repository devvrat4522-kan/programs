#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,n,count=0,f=1,flag=0,s=0;
    cin>>t;
    while (t--)
    {
        cin>>n;
        long long a[n];
        for (i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        while(f<=n)
        {
            if(f==1)
            {
                count=n;
            }
            else
            {
                while(f<=n)
                {
                    int beg=1,end=f,j;
                    while(end<=n)
                    {
                        flag=0;
                        for(j=beg;j<end;j++)
                        {
                            if(a[j+1]<a[j])
                            {
                                flag++;
                                break;
                            }
                        }
                        if(flag==0)
                        {
                            s++;
                        }
                    beg++;
                    end++;
                    }
                }
                f++;
            }
        }
   cout<<count+s;
}
return 0;
}