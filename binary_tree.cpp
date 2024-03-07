#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
    node(int n)
    {
        this->data=n;
    }
};
// creating tree
node * build(node *root)
    {
    int data;
    cout<<"Enter the data : "<<endl;
    cin>>data;
    root = new node(data);
    if(data ==-1)
        return NULL;  
    root->left = build(root->left);
    root->right = build(root->right);
    return root;
    }
// level order traversal
void traversal(node *root)
{
    queue<node*>qu;
    qu.push(root);
    qu.push(NULL);
    while(!qu.empty())
    {
        node*temp = qu.front();
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

void inorder(node *root)
{
    if(root==NULL)
        return ;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    node *root=NULL;
    root = build(root);
    traversal(root);
    cout<<"INORDER : ";inorder(root);cout<<endl;
    cout<<"PREORDER : ";preorder(root);cout<<endl;
    cout<<"POSTORDER : ";postorder(root);cout<<endl;
}