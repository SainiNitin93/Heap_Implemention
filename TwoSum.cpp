#include<bits/stdc++.h>
using namespace std;
bool find(int arr[], int size, int target){
    sort(arr, arr+size);
    int s=0;
    int e=size-1;
    while(s<e){
        if(target>arr[s]+arr[e]){
            s++;
        }
        else if(target<arr[s]+arr[e]){
            e--;
        }
        else{
            return true;
        }
    }
    return false;
}
int main(){
    int arr[5]={10, 30, 20, 50, 40};
    cout<<find(arr, 5, 65);
    return 0;
}