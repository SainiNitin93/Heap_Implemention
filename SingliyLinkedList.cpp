#include"bits/stdc++.h"
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};
void Add_First(node *(&head), int data){
    if(head==NULL){
        head=new node(data);
    }
    else{
        node *temp=new node(data);
        temp->next=head;
        head=temp;
    }
}
void Reverse(node *(&head)){
    node *pre=NULL;
    node *curr=head;
    node *next=NULL;
    while(curr){
        next=curr->next;
        curr->next=pre;
        pre=curr;
        curr=next;
    }
    head=pre;
}
void Print(node *head){
    if(head==NULL){
        cout<<"Empty! ";
    }
    node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node *head=NULL;
    Add_First(head, 10);
    Add_First(head, 20);
    Add_First(head, 30);
    Print(head);
    Reverse(head);
    Print(head);
    return 0;
}