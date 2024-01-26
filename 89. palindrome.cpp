#include<bits/stdc++.h>
using namespace std;
bool palindrome(int x){
    int num=0;
    int n=x;
    while(n!=0){
        int id=n%10;
        num=num*10+id;
        n/=10;
    }
    return (num==x);
}
int main(){
    int n=12321;
    cout<<boolalpha<<palindrome(n);
    return 0;
}
