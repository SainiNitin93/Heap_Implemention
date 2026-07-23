/*Rotate matrix 90 degree */
#include<bits/stdc++.h>
using namespace std;
void Rotate(int Mat[][3], int size){
    int i,j;
    // First we will transfrom matrix 
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            swap(Mat[i][j], Mat[j][i]);
        }
    }
    // Reverse all row now
    for(i=0;i<size;i++){
        int s=0;
        int e=size-1;
        while(s<e){
            swap(Mat[i][s], Mat[i][e]);
            s++;
            e--;
        }
    }
}
int main(){
    int i,j;
    int Mat[3][3]={{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    Rotate(Mat, 3);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<Mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}