#include<bits/stdc++.h>
using namespace std;
void find_position(string &s,string s1){
    int pos=s.find(s1);
    while(pos!=string::npos){
        cout<<pos<<" ";
        pos=s.find(s1,pos+1);
    }
}
int main(){
    // string s="geeks for geeks";
    // string s1="geeks";
    string s="aaaaa";
    string s1="a";
    find_position(s,s1);
    return 0;
}