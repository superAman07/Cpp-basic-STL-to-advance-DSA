// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int palindrome(string str,int start,int end){
//     if(start>=end)return 1;
//     return (str[start]==str[end])&&palindrome(str,start+1,end-1);
// }
// int main(){
//     cout<<boolalpha<<palindrome("abca",0,3);
//     return 0;
// }


// sum of digits

#include <iostream>
using namespace std;
int sum(int n){
    if(n==0)return 0;
    return (n%10)+sum(n/10);
}
int main()
{
    cout<<sum(235);
    return 0;
}