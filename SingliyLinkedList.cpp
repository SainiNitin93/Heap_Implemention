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
void Add_First(node *(&head), node *(&tail), int data){
    if(head==NULL){
        head=tail=new node(data);
    }
    else{
        node *temp=new node(data);
        temp->next=head;
        head=temp;
    }
}
void Add_Last(node *(&head), node *(&tail), int data){
    if(head==NULL){
        tail=head=new node(data);
    }
    else{
        node *temp=new node(data);
        tail->next=temp;
        tail=temp;
    }
}
void Delete_First(node *(&head), node *(&tail)){
    if(head==NULL){
        cout<<"Underflow! ";
        return;
    }
    else{
        node *temp=head;
        head=temp->next;
        delete temp;
        if(!head){
            tail=NULL;
        }
    }
}
void Delete_last(node *(&head), node *(&tail)){
    if(head==NULL){
        cout<<"Underflow! ";
        return;
    }
    else if(!head->next){
        node *temp=tail;
        delete temp;
        tail=head=NULL;
    }
    else{
        node *temp=tail;
        delete temp;
        tail=head;
        while(tail->next){
            tail=tail->next;
        }
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
    node *tail=NULL;
    Add_First(head, tail, 50);
    //Add_First(head, tail, 40);
    //Add_First(head, tail, 30);
    Print(head);
    Delete_First(head, tail);
    Print(head);
    Add_Last(head, tail, 60);
    Add_Last(head, tail, 70);
    //Reverse(head);
    Print(head);
    Delete_last(head, tail);
    Add_Last(head, tail, 80);
    Print(head);
    return 0;
}