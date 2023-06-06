#include<bits/stdc++.h>
using namespace std;
class Mydate
{
    public:
    int d,m,y;
    Mydate()
    {d=0;m=0;y=0;}
};
class Employee
{
    private:
    int empno;
    Mydate doj;
    int salary;
    public:
    Employee(int a,Mydate df,int b)
    {
        empno=a;
        doj=df;
        salary=b;
    }
    Employee(const Employee &);
    void setEmpdata(int emp,Mydate mt,int sal)
    {
        empno=emp;
        doj=mt;
        salary=sal;
    }
    void showEmpdata()
    {
        cout<<empno;
        cout<<doj.d<<" "<<doj.m<<" "<<doj.y<<endl;
    }
    friend void get(Employee &);
    friend float calc(Employee &);
    ~Employee();
};
Employee::Employee(const Employee &e)
{
    //Employee et;
    doj=e.doj;
    empno=e.empno;
    salary=e.salary;
}
void get(Employee &t)
{
    Mydate m;
    cin>>t.empno;
    cin>>m.m;
    cin>>m.d;
    cin>>m.y;
    t.doj=m;
    cin>>t.salary;
}
float calc(Employee &t)
{
     if(t.salary<100000)
        return 0;
    else if(t.salary>=100000 && t.salary<200000)
        return 0.1*t.salary;
    else if(t.salary>=200000 && t.salary<500000)
        return 0.15*t.salary;
    else
        return 0.2*t.salary;
}
int main()
{
    int choice,n,x=1;
    Mydate u;
    class Employee date(0,u,0);
    get(date);
    do
    {
        cout<<"\nmenu:\n1.print Employee details\n2.update Employee details\n3.exit"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: {
                        date.showEmpdata();
                        cout<<"\ntax pay: $"<<calc(date)<<endl;
                        break;
                    }
            case 2: {
                        Mydate y;
                        int a,c;
                        cout<<"enter empno\n";
                        cin>>a;
                        cout<<"enter dob:\ndate:";
                        cin>>y.d;
                        cout<<"\nmonth:";
                        cin>>y.m;
                        cout<<"\nyear:";
                        cin>>y.y;
                        cout<<"enter salary\n";
                        cin>>c;
                        date.setEmpdata(a,y,c);
                        break;
                    }
            case 3: {
                        x=0;
                        break;
                    }
            default: break;
        }
    }while(x>0);
    return 0;
}


// if(t1[n-1]==t2[m-1])
//         {
//             f=1;
//         }