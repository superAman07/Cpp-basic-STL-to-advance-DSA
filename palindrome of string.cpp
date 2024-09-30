#include<bits/stdc++.h>
using namespace std;
void display(string s){
    string p=s;
    reverse(p.begin(),p.end());
    if(s==p){
        cout<<"yes"<<"\n";
    }
    else{
        cout<<"no"<<"\n";
    }
}
int main(){
    string s;
    cout<<"enter your string";
    cin>>s;
    display(s);
    return 0;
}