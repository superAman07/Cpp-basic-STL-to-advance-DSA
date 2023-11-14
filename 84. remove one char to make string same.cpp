#include<bits/stdc++.h>
using namespace std;
// void one_extra_char(const string &s1, const string &s2){
char one_extra_char(const string &s1, const string &s2){
    int n=s1.size();
    int m=s2.size();
    int a=0;
    char z,y;
    // for(int i=0;i<max(m,n);i++){
    //     if(s1[i]==s2[i]){
    //         a++;
    //     }
    //     else{
    //         z=s2[a];
    //         y=s1[a];
    //         break;
    //     }
    // }
    //     if(m>n){
    //     cout<< z;
    // }
    // else{
    //     cout<<y;
    // }
    size_t minlen=min(m,n);
    for(size_t i=0;i<min(m,n);++i){
        if(s1[i]!=s2[i]){
            return (n>m)?s1[i]:s2[i];        // ever-green
        }
    }
    if(n>minlen){
        return s1[minlen];
    }
    else if(m>minlen){
        return s2[minlen];
    }
    return '\0';
}
int main(){
    string s1="abecd";
    string s2="abecdj";
    // one_extra_char(s1,s2);
    cout<<one_extra_char(s1,s2);
    return 0;
}