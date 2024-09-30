#include<bits/stdc++.h>
using namespace std;
void count(int n){
    int c=1;
    while(n>=10){
        c+=1;
        n=n/10;
    }
    cout<<c;
}
int main(){
    int n;
    cin>>n;
    count(n);
    return 0;
}