#include<bits/stdc++.h>
using namespace std;
class Coordinate
{
    protected:
    int x,y;
    public:
    void set(int a,int b)
    {
        x=a;y=b;
    }
    int getDistance()
    {
        cout<<(sqrt(x*x+y*y));
    }
    int getDistance(Coordinate s)
    {
        cout<<(sqrt(pow(x-s.x,2)-pow(y-s.y,2)));
    }
    
};
class Shape:public Coordinate
{
    protected:
    string Shapenm;
    public:
    void setter(string st)
    {
        Shapenm=st;
    }
    void getter()
    {
        cout<<Shapenm;
    }
};
class 
int main()
{
    Coordinate c;
    c.set(4,6);
    c.getDistance();
    return 0;
}
