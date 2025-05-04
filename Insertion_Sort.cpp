/* Insertion Sort */
#include"bits/stdc++.h"
using namespace std;
void Sort(int arr[], int size){
    int i, j;
    for(i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[5]={10, 30, 20, 50, 40};
    Sort(arr, 5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}