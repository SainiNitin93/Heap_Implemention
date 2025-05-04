#include<bits/stdc++.h>
using namespace std;
int find(int arr[], int size){
    int largest=0;
    int second_largest=0;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        if(arr[i]<largest && arr[i]>second_largest){
            second_largest=arr[i];
        }
    }
    return second_largest;
}
int main(){
    int arr[5]={10, 20, 30, 40, 50};
    cout<<find(arr, 5);
}