#include<bits/stdc++.h>
using namespace std;
void prime(int a[],int l)
{
    int i,j,count=0,f;
    for(i=0;i<l;i++)
    {
        f=0;
        if(a[i]==1)
        {
            f=1;
        }
        else{
        for(j=2;j<=sqrt(a[i]);j++)
        {
            if(a[i]%j==0)
            {
                f=1;
                break;
            }
        } }
        if(f==0)
        {
            count++;
        }
    }
    cout<<"The number of prime numbers : "<<count<<"\n";
}
void palin(int a[],int l)
{
    int r,rev,i,f,m,count=0;
    for(i=0;i<l;i++)
    {
        m=a[i];
        f=0;rev=0;
        while(m!=0)
        {
            r=m%10;
            rev=rev*10+r;
            m/=10;
        }
        if(rev==a[i])
        {
            count++;
        }
    }
    cout<<"The number of palindrome numbers : "<<count<<"\n";
}
void maxi(int a[],int l)
{
    int maxs;
    maxs = *max_element(a,a+l);
    cout<<"The maximum number : "<<maxs<<"\n";
}
void mini(int a[],int l)
{
    int mins;
    mins = *min_element(a,a+l);
    cout<<"The minimum number : "<<mins<<"\n";
}
void divisor(int a[],int l)
{
    int i,j,count[l]={0},max,st,k;
    for(i=0;i<l;i++)
    {
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
              count[i]++;
            }
        }
    }
    max=-1;
    for(i=0;i<l;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            k=i;
            st=a[i];
        }
        else if(max==count[i])
        {
            if(a[i]>a[k])
            {
                max=count[i];
                st=a[i];
            }
            else
            {
                max=count[i];
                st=a[k];
            }
        }
    }
    cout<<"The number that has the maximum number of divisors : "<<st;
}
int main()
{
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++)
        cin>>arr[i];
    maxi(arr,n);
    mini(arr,n);
    prime(arr,n);
    palin(arr,n);
    divisor(arr,n);
    return 0;

}




#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string st,st1;
        cin>>st;
        int i,f=0,s=0,l=st.length();
        if(s==0)
        {
            
                if(l==1)
                {
                    if(st[0]!='Y'||st[0]!='e'||st[0]!='s')
                    {
                        f=1;
                    }
                }
                else if(l==2)
                {
                    if((st[0]=='Y'&&st[1]!='e')||(st[0]=='e'&&st[1]!='s')||(st[0]=='s'&&st[1]!='Y'))
                    {   
                        f=1;
                    }
                }
                else
                {
                    for(i=0;i<l;i+3)
                    {
                        st1=st.substr(i,3);
                        cout<<st1<<" ";
                        if(st1.compare("Yes")!=0 && st1.compare("esY")!=0 && st1.compare("sYe")!=0)
                        {
                            f=1;
                            break;
                        }
                    }
                     if(l%3!=0)
                    {
                        if(st[0]!=st[l-1])
                        {
                            f=1;
                        }
                    }
                }
            if(f==1)
        {
            cout<<"No";
        }
        else 
        {
            cout<<"Yes";
        }
        cout<<"\n";
        }
        
    }
    return 0;
}
