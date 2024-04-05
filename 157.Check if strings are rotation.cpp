//Most efficient solution in O(n)

#include<iostream>
#include<algorithm>
using namespace std;
bool areRotation(string &s1,string &s2){
    if(s1.length()!=s2.length())return 0;
    return ((s1+s1).find(s2)!=string::npos);
}
int main(){
    // string s1 = "ABCD";
    string s1 = "ABAB";
    // string s2 = "CDAB";
    string s2 = "ABBA";
    cout<<boolalpha<<areRotation(s1,s2);
    return 0;
}
