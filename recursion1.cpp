#include<bits/stdc++.h>
using namespace std;
struct dob
    {
        int date;
        int month;
        int year;
    };
struct add
    {
        int plotno;
        string areacode;
        string city;
    };
struct marks
{
    float m1,m2,m3,m4,m5;
};
struct student
{
    string name;
    dob d;
    add a;
    string regdno;
    marks m ;    
};

int main()
{
    student st[10],st1;
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"ENTER THE NAME : \n";
        cin>>st[i].name;
        cout<<"ENTER THE DATE OF BIRTH : \n";
        cout<<"Date : ";
        cin>>st[i].d.date;
        cout<<"Month : ";
        cin>>st[i].d.month;
        cout<<"Year : ";
        cin>>st[i].d.year;
        cout<<"ENTER THE ADDRESS : \n";
        cout<<"Plot number : ";
        cin>>st[i].a.plotno;
        cout<<"Area Code : ";
        cin>>st[i].a.areacode;
        cout<<"City : ";
        cin>>st[i].a.city;
        cout<<"MARKS OF FIVE SUBJECTS : \n";
        cout<<"Marks 1 : ";
        cin>>st[i].m.m1;
        cout<<"Marks 2 : ";
        cin>>st[i].m.m2;
        cout<<"Marks 3 : ";
        cin>>st[i].m.m3;
        cout<<"Marks 4 : ";
        cin>>st[i].m.m4;
        cout<<"Marks 5 : ";
        cin>>st[i].m.m5;
        cout<<"ENTER THE REGISTRATION NUMBER : \n";
        cin>>st[i].regdno;
    }
    cout<<"\n";
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(st[j].regdno<st[i].regdno)
            {
                st1=st[i];
                st[i]=st[j];
                st[j]=st1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<"DETAILS OF "<<i+1<<" Student \n";
        cout<<"NAME : "<<st[i].name;
        cout<<"\nDATE OF BIRTH : ";
        cout<<st[i].d.date<<"-"<<st[i].d.month<<"-"<<st[i].d.year<<"\n";
        cout<<"ADDRESS : \n";
        cout<<st[i].a.plotno<<" "<<st[i].a.areacode<<" "<<st[i].a.city<<"\n";
        cout<<"MARKS : \n";
        cout<<st[i].m.m1<<" "<<st[i].m.m2<<" "<<st[i].m.m3<<" "<<st[i].m.m4<<" "<<st[i].m.m5<<'\n';
        cout<<st[i].regdno<<"\n\n";
    }
}