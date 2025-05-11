#include<bits/stdc++.h>
using namespace std;
bool find(int arr[], int size, int target){
    sort(arr, arr+size);
    for(int i=0;i<size-2;i++){
        int new_target=target-arr[i];
        int s=i+1;
        int e=size-1;
        while(s<e){
            if(new_target<arr[s]+arr[e]){
                e--;
            }
            else if(new_target>arr[s]+arr[e]){
                s++;
            }
            else{
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[5]={10, 30, 20, 50, 40};
    cout<<find(arr, 5, 150);
    return 0;
}