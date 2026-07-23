#include<bits/stdc++.h>
using namespace std;
int Profit(int arr[], int size){
    int Min=arr[0];
    int Profit=0;
    for(int i=0;i<size;i++){
        Min=min(Min, arr[i]);
        Profit=max(Profit, arr[i]-Min);
    }
    return Profit;
}
int main(){
    int arr[5]={10, 30, 20, 50, 40};
    cout<<Profit(arr, 5);
}