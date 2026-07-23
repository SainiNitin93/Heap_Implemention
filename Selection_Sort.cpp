#include"bits/stdc++.h"
using namespace std;
void Sort(int arr[], int size){
    int i,j;
    for(i=0;i<size-1;i++){
        int temp=i;
        for(j=i+1;j<size;j++){
            if(arr[temp]>arr[j]){
                temp=j;
            }
        }
        if(temp!=i){
            swap(arr[temp], arr[i]);
        }
    }
}
int main(){
    int arr[5]={10, 30, 20, 50, 40};
    Sort(arr, 5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}