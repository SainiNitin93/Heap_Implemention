#include"bits/stdc++.h"
using namespace std;
void Sort(int arr[], int size){
    int i,j;
    for(i=0;j<size-1;j++){
        for(j=0;j<size-1-i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j], arr[j+1]);
            }
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