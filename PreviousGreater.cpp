#include<bits/stdc++.h>
using namespace std;
vector<int>Greater(int arr[], int size){
    vector<int>v(size, -1);
    stack<int>s;
    for(int i=0;i<size;i++){
        while(!s.empty() && arr[s.top()]<arr[i]){
            s.pop();
        }
        if(!s.empty()){
            v[i]=arr[s.top()];
        }
        else{
            v[i]=-1;
        }
        s.push(i);
    }
    return v;
}
int main(){
    int arr[5]={10, 30, 20, 50, 40};
    vector<int>ans=Greater(arr, 5);
    for(int i=0;i<5;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}