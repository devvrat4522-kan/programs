#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int a)
    {
        data=a;
        this->left=NULL; 
        this->right=NULL;
    }
};

// minimum element in right subtree
Node *minval(Node *root)
{
    Node *temp=root;
    while(temp->left!=NULL)
        temp=temp->left;
    return temp;
}
// insertion of values
Node * insert(Node *&root,int data)
{
    if(root==NULL)
    {
        root = new Node(data);
        return root;
    }
    else
    {
        if(data > root->data)
            root->right = insert(root->right,data);
        else
            root->left = insert(root->left,data);
    }
    return root;
}

// data input
void input(Node *&root)
{
    int n;
    cin>>n;
    while(n!=-1)
    {
        insert(root,n);
        cin>>n;
    }
}

// level traversal
void traversal(Node *&root)
{
    queue<Node*>qu;
    qu.push(root);
    qu.push(NULL);
    while(!qu.empty())
    {
        Node*temp = qu.front();
        qu.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!qu.empty())
                qu.push(NULL);
        }
        else{
        cout<<temp->data<<" ";
        if(temp->left)
            qu.push(temp->left);
        if(temp->right)
            qu.push(temp->right);
        }
    }
}
void inorder(Node *root)
{
    if(root==NULL)
        return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
Node *delete1(Node *root,int x)
{
    if(root==NULL)
        return NULL;
    if(root->data==x)
    {
        // 0 child
        if(root->left==NULL && root->right==NULL)
        {
            delete(root);
            return NULL;
        }
        // 1 child
        if(root->left==NULL and root->right!=NULL)
        {
            Node *temp = root->right;
            delete(root);
            return temp;
        }
        else if(root->right==NULL and root->left!=NULL)
        {
            Node *temp=root->left;
            delete(root);
            return temp;
        }
        // 2 child
        if(root->left!=NULL and root->right!=NULL)
        {
            int mini=minval(root->right)->data;
            root->data=mini;
            root->right=delete1(root->right,mini);
            return root;
        }
    }
    if(root->data<x){
        root->right=delete1(root->right,x);
        return root;
    }
    else if(root->data>x){
        root->left=delete1(root->left,x);
        return root;
    }
}
int main()
{
    Node *root=NULL;
    cout<<"enter the data to insert : ";
    input(root);
    traversal(root);
    cout<<"\ninorder\n";    //4 5 7 8 10 21 27
    inorder(root);
    cout<<"\npreorder\n";   //10 8 7 5 4 21 27
    preorder(root);
    cout<<"\npostorder\n";  //10 8 7 5 4 21 27
    postorder(root);
    delete1(root,10);cout<<"\n";
    traversal(root);
}

// 10 8 21 7 27 5 4 -1

