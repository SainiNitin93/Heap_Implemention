#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *pre;
    node *next;
    node(int data){
        this->data=data;
        pre=next=NULL;
    }
};
class Dequeue{
    node *front;
    node *rear;
    public:
    Dequeue(){
        front=rear=NULL;
    }
    void Push_Front(int data){
        if(front==NULL){
            front=rear=new node(data);
            return;
        }
        else{
            node *temp=new node(data);
            temp->next=front;
            front->pre=temp;
            front=temp;
            return;
        }
    }
    void Push_Rear(int data){
        if(front==NULL){
            rear=front=new node(data);
        }
        else{
            node *temp=new node(data);
            rear->next=temp;
            temp->pre=rear;
            rear=temp;
            return;
        }
    }
    void Pop_Front(){
        if(front==NULL){
            cout<<"Underflow! ";
            return;
        }
        else{
            node *temp=front;
            front=front->next;
            delete temp;
            if(front){
                front->pre=NULL;
            }
            else{
                rear=NULL;
            }
        }
    }
    void Pop_Rear(){
        if(front==NULL){
            cout<<"Underflow! ";
            return;
        }
        else{
            node *temp=rear;
            rear=rear->pre;
            delete temp;
            if(rear){
                rear->next=NULL;
            }
            else{
                front=NULL;
            }
        }
    }
    void Print(){
        node *temp=front;
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    Dequeue d;
    d.Push_Front(40);
    d.Push_Front(30);
    d.Push_Rear(50);
    d.Push_Rear(60);
    d.Print();
    return 0;
}