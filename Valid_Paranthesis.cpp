#include<bits/stdc++.h>
using namespace std;
bool Check(string Str){
    stack<char>s;
    for(char i:Str){
        if(i=='{' || i=='(' || i=='['){
            s.push(i);
        }
        else{
            if(s.empty()){
                return false;
            }
            char t=s.top();
            if((t=='(' && i==')') || (t=='{' && i=='}') || (t=='[' && i==']')){
                s.pop();
            }
            else{
                return false;
            }
        }
    }
    return s.empty();
}
    
int main(){
    string s="{([{})}";
    cout<<Check(s);
}