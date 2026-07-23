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
void Merge(node *head, node *Head){
    
}
int main(){
    node *head=NULL;
    Node *Head=NULL;
    Add_First(head, 10);
    Add_First(head, 30);
    Add_First(head, 50);
    Add_First(Head, 20);
    Add_First(Head, 40);
    Add_First(Head, 60);
}