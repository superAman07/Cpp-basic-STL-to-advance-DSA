Both have same time and space complexity 
Time : O(m+n)
Space : O(m+n)
// iterative solution

// #include<iostream>
// using namespace std;
// bool CheckStrSubsequence(const string &s1,const string &s2){
//     int n=s1.length(),m=s2.length();
//     int i=0,j=0;
//     while(i<n && j<m){
//         if(s1[i]==s2[j]){
//             i++;
//             j++;
//         }else{
//             i++;
//         }
//     }
//     return (j==m);
// }
// int main(){
//     string s1="GEEKSFORGEEKS";
//     string s2= "GRGES";
//     cout<<boolalpha<<CheckStrSubsequence(s1,s2);
//     return 0;
// }

// Recursive Solution 

#include<iostream>
using namespace std;
bool CheckStrSubsequence(const string &s1,const string &s2,int n,int m){
    if(m==0)return true;    
    if(n==0)return false;    
    if(s1[n-1]==s2[m-1])return CheckStrSubsequence(s1,s2,n-1,m-1);
    else return CheckStrSubsequence(s1,s2,n-1,m);
}
int main(){
    string s1="GEEKSFORGEEKS";
    string s2= "GRGESZ";
    int n=s1.length(),m=s2.length();
    cout<<boolalpha<<CheckStrSubsequence(s1,s2,n,m);
    return 0;
}
