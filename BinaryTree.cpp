#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left;
    node *right;
    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
void Insert(int data, node *(&root)){
    int a;
    if(data==-1){
        return;
    }
    if(root==NULL){
        root=new node(data);
    }
    cout<<"Enter the data for the left child of "<<data<<"! ";
    cin>>a;
    Insert(a, root->left);
    cout<<"Enter the data for the right child of "<<data<<"! ";
    cin>>a;
    Insert(a, root->right);
}
void Preorder(node *root){
    stack<node *>s;
    s.push(root);
    while(!s.empty()){
        node *temp=s.top();
        s.pop();
        cout<<temp->data<<" ";
        if(temp->right){
            s.push(temp->right);
        }
        if(temp->left){
            s.push(temp->left);
        }
    }
}
void Postorder(node *root){
    stack<node *>s;
    s.push(root);
    vector<int>ans;
    while(!s.empty()){
        node *temp=s.top();
        s.pop();
        ans.push_back(temp->data);
        if(temp->left){
            s.push(temp->left);
        }
        if(temp->right){
            s.push(temp->right);
        }
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
void Leval_Order(node *root){
    queue<node *>q;
    q.push(root);
    while(!q.empty()){
        node *temp=q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}
int main(){
    int a;
    node *root=NULL;
    cout<<"Enter the data for the root node! ";
    cin>>a;
    Insert(a, root);
    Preorder(root);
    cout<<endl;
    Postorder(root);
    //Leval_Order(root);
}