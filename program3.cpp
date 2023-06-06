#include<bits/stdc++.h>
using namespace std;
bool inline ideal_gas(int n,int p,int r,int t,int v)
{
    return(p*v==n*r*t);
}
int inline buoyant_force(int den,int acc,int vol)
{
    return (den*acc*vol);
}
int inline x_or(int a,int b)
{
    return a^b;
}
int inline diso(int u,int v,int t)
{
    int d;
    d=(v-u)/t;
    return d;
}
int main()
{
    int n,p,r,t,v,den,acc,vol,a,b,u,vel,time;
    cout<<"idealgas\n";
    cin>>n>>p>>r>>t>>v;
    cout<<"\nForce\n";
    cin>>den>>acc>>vol;
    cout<<"XOR\n";
    cin>>a>>b;
    cout<<"Dispalcement : ";
    cin>>u>>vel>>time;
    cout<<ideal_gas(n,p,r,t,v);cout<<endl;
    cout<<buoyant_force(den,acc,vol);cout<<endl;
    cout<<x_or(a,b)<<endl;
    cout<<diso(u,vel,time);
    return 0;
}