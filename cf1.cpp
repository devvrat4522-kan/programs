#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long k,s;int x,y,z,f=0;
    cin>>k>>s;
    if(k==0&&s==0)
    {
        f=1;
    }
    else
    {
    for(x=0;x<k;x++)
    {
        for(y=0;y<k;y++)
        {
            for(z=0;z<k;z++)
            {
                if((x+y+z)==s)
                {
                    f++;
                }
            }
            //cout<<endl;
        }
        //cout<<endl;
    }
    }
    cout<<f;
    return 0;
}