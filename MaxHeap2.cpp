#include<bits/stdc++.h>
using namespace std;
void Hepify(int arr[], int size, int index){
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
        Hepify(arr, size, largest);
    }
}
void Build_Heap(int arr[], int size){
    for(int i=size/2-1;i>=0;i--){
        Hepify(arr, size, i);
    }
}
int main(){
    int arr[5]={40, 50, 10, 20, 30};
    Build_Heap(arr, 5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}