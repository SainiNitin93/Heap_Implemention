#include<bits/stdc++.h>
using namespace std;
int longest(string str){
    int size=str.size();
    vector<int>count(size, 0);
    int f=0;
    int s=0;
    int length=0;
    while(s<size){
        if(!count[str[s]-'a']){
            count[str[s]-'a']++;
            s++;
            length=max(length, (s-f));
        }
        else{
            while(count[str[s]-'a']){
                count[str[f]-'a']--;
                f++;
            }
        }

    }
    return length;

}
int main(){
    string s="nitin";
    cout<<longest(s)<<endl;
    return 0;
}