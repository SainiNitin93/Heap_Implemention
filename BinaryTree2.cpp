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
node *Insert(int data){
    int a;
    if(data==-1){
        return NULL;
    }
    node *temp=new node(data);
    cout<<"Enter the data for the left child of "<<data<<"! ";
    cin>>a;
    temp->left=Insert(a);
    cout<<"Enter the data for the right child of "<<data<<"! ";
    cin>>a;
    temp->right=Insert(a);
    return temp;
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
int Sum(node *root){
    if(root==NULL){
        return 0;
    }
    return root->data+Sum(root->left)+Sum(root->right);
}
int Leaf_node(node *root){
    if(root==NULL){
        return 0;
    }
    if(!root->left && !root->right){
        return 1;
    }
    return Leaf_node(root->left)+Leaf_node(root->right);
}
int Count(node *root){
    if(root==NULL){
        return 0;
    }
    return 1+Count(root->left)+Count(root->right);
}
int Height(node *root){
    if(root==NULL){
        return 0;
    }
    return 1+max(Height(root->left), Height(root->right));
}
int Non_Leaf(node *root){
    if(root==NULL){
        return 0;
    }
    if(!root->left && !root->right){
        return 0;
    }
    return 1+Non_Leaf(root->left)+Non_Leaf(root->right);
}
int main(){
    int a;
    cout<<"Enter the data for the root node! ";
    cin>>a;
    node *root=Insert(a);
    Leval_Order(root);
    cout<<"The sum of all node is! "<<Sum(root)<<endl;
    cout<<"Total leaf node in the tree are! "<<Leaf_node(root)<<endl;
    cout<<"Total node in the tree are! "<<Count(root)<<endl;
    cout<<"The height of the tree is! "<<Height(root)<<endl;
    cout<<"The total no of the non leaf node are! "<<Non_Leaf(root)<<endl;
    return 0;
}