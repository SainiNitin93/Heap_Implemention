#include<bits/stdc++.h>
using namespace std;
int SquareRoot(int n){
    if(n==1 || n==0){
        return n;
    }
    int s=0;
    int e=n;
    int ans;
    while(s<=e){
        int mid=(s+(e-s))/2;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}
int main(){
    cout<<SquareRoot(49);
    return 0;
}