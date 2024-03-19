// Iterative solution
#include<iostream>
using namespace std;
bool CheckStrSubsequence(const string &s1,const string &s2){
    int n=s1.length(),m=s2.length();
    int i=0,j=0;
    while(i<n && j<m){
        if(s1[i]==s2[j]){
            i++;
            j++;
        }else{
            i++;
        }
    }
    return (j==m);
}
int main(){
    string s1="GEEKSFORGEEKS";
    string s2= "GRGES";
    cout<<boolalpha<<CheckStrSubsequence(s1,s2);
    return 0;
}
