#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,s,x,y,z,f=0;
    cin>>k>>s;
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
            
        }
        
    }
    cout<<f;
    return 0;
}