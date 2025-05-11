#include<bits/stdc++.h>
using namespace std;
class Dequeue{
    int front, rear;
    int size;
    int *arr;
    public:
    Dequeue(int size){
        this->size=size;
        arr=new int[size];
        front=rear=-1;
    }
    bool Is_Empty(){
        return (front==-1);
    }
    bool Is_Full(){
        return ((rear+1)%size==front);
    }
    void Push_Front(int data){
        if(Is_Full()){
            cout<<"Overflow! ";
            return;
        }
        else if(Is_Empty()){
            front=rear=0;
            arr[front]=data;
        }
        else{
            front=(front-1+size)%size;
            arr[front]=data;
            return;
        }
    }
    void Push_Rear(int data){
        if(Is_Full()){
            cout<<"Overflow! ";
            return;
        }
        else if(Is_Empty()){
            front=rear=0;
            arr[rear]=data;
            return;
        }
        else{
            rear=(rear+1)%size;
            arr[rear]=data;
            return;
        }
    }
    void Pop_Front(){
        if(Is_Empty()){
            cout<<"Underflow! ";
            return;
        }
        else{
            if(front==rear){
                rear=front=-1;
            }
            else{
                front=(front+1)%size;
            }
        }
    }
    void Pop_Rear(){
        if(Is_Empty()){
            cout<<"Underflow! ";
            return;
        }
        else{
            if(front==rear){
                rear=front=-1;
            }
            else{
                rear=(rear-1+size)%size;
                return;
            }
        }
    }
    void Print(){
        
    }
};
int main(){
    Dequeue d(5);
    d.Push_Front(30);
    d.Push_Front(20);
    d.Push_Rear(40);
    d.Push_Rear(50);
    return 0;
}