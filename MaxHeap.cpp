#include<bits/stdc++.h>
using namespace std;
class Heap{
    int size;
    int total_size;
    int *arr;
    public:
    Heap(int n){
        size=0;
        total_size=n;
        arr=new int[total_size];
    }
    void insert(int data){
        if(size==total_size){
            cout<<"Heap Overflow! ";
            return ;
        }
        arr[size]=data;
        int index=size;
        size++;
        while(index>0 && arr[index]>arr[(index-1)/2]){
            swap(arr[index], arr[(index-1)/2]);
            index=(index-1)/2;
        }
    }
    void Remove(){
        if(size==0){
            cout<<"Underflow! ";
            return;
        }
        arr[0]=arr[size-1];
        size--;
        if(size==0){
            return;
        }
        int i=0;
        while(i<size){
            int largest=i;
            int left=(2*i)+1;
            int right=(2*i)+2;
            if(left<size && arr[largest]<arr[left]){
                largest=left;
            }
            if(right<size && arr[largest]<arr[right]){
                largest=right;
            }
            if(largest == i){
                break;
            }
            else{
                swap(arr[i], arr[largest]);
                i=largest;
            }
        }
    }
    void Print(){
        if(size==0){
            cout<<"Empty! ";
            return;
        }
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Heap H(5);
    H.insert(40);
    H.insert(30);
    H.insert(20);
    H.insert(50);
    H.insert(10);
    H.Print();
    H.Remove();
    H.Remove();
    H.Remove();
    H.Print();
    return 0;
}