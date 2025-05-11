#include<bits/stdc++.h>
using namespace std;
int find(int arr[], int size, int k){
    int i;
    priority_queue<int, vector<int>, greater<int>>p;
    for(i=0;i<k;i++){
        p.push(arr[i]);
    }
    for(i=k;i<size;i++){
        if(p.top()<arr[i]){
            p.pop();
            p.push(arr[i]);
        }
    }
    return p.top();
}
int main(){
    int arr[5]={10, 30, 20, 50, 40};
    cout<<find(arr, 5, 2);
}