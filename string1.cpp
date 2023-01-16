#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1,i,j,f=0; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char st1[n];i=0;int s=1,f=0;
        for(i=0;i<n;i++)
        {
            if(s%2!=0)
            {
            cin>>st1[i];
           // s++;
            }
            else
            {
                cin>>st1[i]>>st1[i+1];
                i++;
                if(st1[i]!=st1[i+1])
                {
                    f++;
                }
            }
            s++;
        }
        if(f>0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}
