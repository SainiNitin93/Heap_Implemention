#include<bits/stdc++.h>
using namespace std;
void Transform(int Mat[][3], int size){
    int i,j;
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            swap(Mat[i][j], Mat[j][i]);
        }
    }
}
//Second approach 
void transform(int Mat[][3], int size){
    int i,j;
    for(i=1;i<size;i++){
        for(j=0;j<i;j++){
            swap(Mat[i][j], Mat[j][i]);
        }
    }
}
int main(){
    int i,j;
    int Mat[3][3]={{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    Transform(Mat, 3);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<Mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    transform(Mat, 3);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<Mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}