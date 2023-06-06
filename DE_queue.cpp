#include<bits/stdc++.h>
using namespace std;
#define size 5
int arr[size],rear=-1,front=-1;
void insert_rear()
{
    if( front==0 && rear==size-1 || front==rear+1)
        cout<<"QUEUE IS FULL !! \n";
    else{
    if(front==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            if(rear==size-1){
                rear=0;}
            else
            {
            rear++;
            }
        }
        int x;
        cout<<"ENTER THE ELEMENT : \n";
        cin>>x;
        arr[rear]=x;
    }
}
void insert_front()
{
    if(front==0 && rear==size-1 || front==rear+1)
        cout<<"QUEUE IS FULL !! \n";
    else
    {
        if(front==-1)
        {
            front=0;rear=0;
        }
        else
        {
            if(front==0)
            {
                front=size-1;
            }
            else
            {
            front--;
            }
        }
        int x;
        cout<<"ENTER THE ELEMENT : \n";
        cin>>x;
        arr[front]=x;
    }
}
void front_delete()
{
    cout<<front<<"\n";
    if(front==-1)
        cout<<"EMPTY\n";
    if(front==rear)
    {
        front=-1;rear=-1;
    }
    else
    {  
        if(front==size-1)
        {
            front=0;
        }
        else
        {
            front++;
        }
    }
    cout<<"DELETED ELEMENT IS "<<arr[front];
}


void display()
{
    cout<<front<<endl;
    if((front==size-1 && rear==size-1) || front==-1)
    {
        cout<<"EMPTY\n";
    }
    else{
        if(front>rear){
    for(int i=0;i<=rear;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(int i=front;i<size;i++)
        cout<<arr[i]<<" ";}
    else
    {
        for(int i=front;i<=rear;i++)
            cout<<arr[i]<<" ";
    }

}
}
int main()
{
    int ch,f=0;
    
    do{
    cout<<"\nEnter the choice  : \n1.)insert_rear\n2.)insert_front\n ";
    cin>>ch;
    switch (ch)
    {
    case 1:
        insert_rear();
        break;
    
    case 2:
        insert_front();
        break;//*/

    case 3:
        front_delete();
        break;
    
    case 4:
        display();
        break;

    case 5:
        f=1;
        cout<<"Exit !! ";
        break;
    }
    }while(f!=1);
    return 0;
}