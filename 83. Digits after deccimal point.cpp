#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int decimal_digits(const string &str){
    // auto it=str.find(".");
    // for(auto it1=it;it1<=str.length();it1++){
    //     cout<<str[it1+1];
    // }
    int pos=str.find('.');
    if(pos==string::npos){
        return "";
    }else{
        return (str.substr(pos+1));
    }
}
int main(){
    // string str="15.2867";
    string str="0.32687";
    cout<<decimal_digits(str);
    return 0;
}