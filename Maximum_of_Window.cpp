#include<bits/stdc++.h>
using namespace std;
vector<int>Maximum(int arr[], int size, int k){
    deque<int>d;
    vector<int>ans;
    int i;
    for(i=0;i<k-1;i++){
        while(!d.empty() && arr[i]>arr[d.back()]){
            d.pop_back();
        }
        d.push_back(i);
    }
    for(i=k-1;i<size;i++){
        while(!d.empty() && arr[i]>arr[d.back()]){
            d.pop_back();
        }
        d.push_back(i);
        if(d.front()<=i-k){
            d.pop_front();
        }
        ans.push_back(arr[d.front()]);
    }
    return ans;
}
int main(){
    int arr[5]={10, 20, 30, 50, 40};
    vector<int>Ans=Maximum(arr, 5, 3);
    for(int i=0;i<Ans.size();i++){
        cout<<Ans[i]<<" ";
    }
    return 0;
}