#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

void getString(string &str, string curr,int i){
    if( i==str.length()){
        cout<<curr<<" ";
        return;
    }
    getString( str, curr,i+1);                  
    getString( str, curr+str[i],i+1);                  
}
int main(){
    string str="ABC";
    string curr=" ";
    int i=0;
    getString(str,curr,i);
    return 0;
}
