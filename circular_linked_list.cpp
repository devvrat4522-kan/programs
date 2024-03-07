#include<bits/stdc++.h>
using namespace std;
struct Nodes {
    int data;
    Nodes *next;
    Nodes(int d){
        this->data = d;
        this->next = NULL;
    }
};
void insert(Nodes *&head,int d,int ele)
{
    if(head==NULL)
    {
        Nodes *ptr=new Nodes(d);
        head=ptr;
        head->next=head; 
    }
    else
    {
        Nodes *ptr=new Nodes(d);
        Nodes *temp=head;
        while(temp->data!=ele)
            temp=temp->next;
        ptr->next=temp->next;
        temp->next=ptr;
        head=head->next;
    }
}
void delet(Nodes *& head,int d)
{
    Nodes *temp=head;
    Nodes *ptr=temp->next;
    while(ptr->data!=d)
    {
        temp=ptr;
        ptr=ptr->next;
    }  
    head=head->next;
    temp->next=ptr->next;
    ptr->next=NULL;
}
void print(Nodes * &head){
    Nodes *temp=head;
    Nodes *ptr=head;
    while(temp->next!=ptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
}
int main()
{
    // Nodes *newnodes = new Nodes(5);
    Nodes *head=NULL;
    insert(head,4,5);
    insert(head,6,4);
    insert(head,56,6);
    insert(head,9,56); 
    insert(head,67,9);
    print(head);
    cout<<" "<<head->data<<endl;
    delet(head,67);
    delet(head,56);
    delet(head,6);
    cout<<endl;
    print(head);
    // cout<<head->data;
}