#include<bits/stdc++.h>
using namespace std;
#define size 3 
int queue1[size],front1=-1,rear=-1;
void insert()
{
    int item;
    if(front1==(rear+1)%size)
    {
        cout<<"queue is full \n";
    }
    else
    {
        if(front1==-1)
        {
            front1=0;rear=0;
        }
        else
        {rear=(rear+1)%size;}
            cout<<"enter the element to insert\n";
            cin>>item;
            queue1[rear]=item;
            //rear++;

    }
}
void delete1()
{
    if(front1==-1)
        cout<<"queue is empty\n";
    else
    {
        cout<<"deleted element :"<<queue1[front1]<<endl;;
        if(front1==rear)
        {
            front1=-1;rear=-1;
        }
        else
        {
            front1=(front1+1)%size;
        }
    }
}
void display()
{
    int i;
    if(front1==-1)
        cout<<"queue is empty \n" ;
    else if(rear<front1)
    {
        for(i=front1;i<size;i++)
            cout<<queue1[i]<<" ";
        for(i=0;i<=rear;i++)
            cout<<queue1[i]<<" ";
    }
    else
    {
        for(i=front1;i<=rear;i++)
            cout<<queue1[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int ch,f=0;
    do{
     cout<<"Enter the choice : \n1.)Insert \n2.)Delete \n3.)Display \n4.)Exit \n";
    cin>>ch;
    switch(ch)
    {
    case 1:
        insert();
        break;
    case 2:
        delete1();
        break;
    case 3:
        display();
        break;
    case 4:
        f=1;
        cout<<"Exit !!!";
        break;
    }
    }while(f!=1);
    return 0;
}