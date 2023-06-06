#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,i,n;
    cin>>t;
    //string st="codeforces";
    while(t--)
    {
        cin>>n;
        string st,st1,st2;
        cin>>st;
        int f=0,k,count1=1,count2=1;
        st1.push_back(st[0]);
        for(i=1;i<n;i++)
        {
            for(int j=0;j<st1.length();j++)
            {
                if(st[i]!=st[j])
                {
                    st1.push_back(st[i]);
                }
                else
                {
                    k=i--;
                    f=1;
                    break;
                }
                
            }
            if(f==1)
                {
                    break;
                }
        }
        st2.append(st,k,n);
        int m=0;
        for(int i=m;i<st1.length()-1;i++)
        {
            if(st1[i]!=st1[i+1])
            {
                m=i+1;
                count1++;
            }
        }
        for(int i=m;i<st2.length()-1;i++)
        {
            if(st2[i]!=st2[i+1])
            {
                m=i+1;
                count2++;
            }
        }
        cout<<count1+count2;
        cout<<endl;
    }
    return 0;
}