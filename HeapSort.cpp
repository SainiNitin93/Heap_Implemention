#include<bits/stdc++.h>
using namespace std;
void Heapify(int arr[], int size, int index){
    while(index<size){
        int largest=index;
        int left=2*index+1;
        int right=2*index+2;
        if(left<size && arr[left]>arr[largest]){
            largest=left;
        }
        if(right<size && arr[right]>arr[largest]){
            largest=right;
        }
        if(largest!=index){
            swap(arr[largest], arr[index]);
            index=largest;
        }
    }
}
void Build_Heap(int arr[], int size){
    for(int i=size-1/2;i>=0;i--){
        Heapify(arr, size, i);
    }
}
void Heap_Sort(int arr[], int size){
    // we need to make it one time heap at least so
    Build_Heap(arr, size);
    // Now swap the greatet element to last index for the ascending order
    for(int i=size-1;i>0;i++){
        swap(arr[0], arr[i]);
        // Again make it heap 
        Heapify(arr, i, 0);
    }
}
int main(){
    int arr[5]={10, 30, 20, 50, 40};
    Heap_Sort(arr, 5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}