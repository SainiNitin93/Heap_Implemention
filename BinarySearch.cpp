#include<bits/stdc++.h>
using namespace std;
int find(int arr[], int size, int target){
    int f=0;
    int s=size-1;
    while(f<=s){
        int mid=(s+(s-f))/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(target>arr[mid]){
            f=mid+1;
        }
        else{
            s=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[5]={10, 20, 30, 40, 50};
    cout<<find(arr, 5, 60);
}