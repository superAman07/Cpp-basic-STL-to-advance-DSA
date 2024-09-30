#include<bits/stdc++.h>
using namespace std;

int isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void primeFactor(int n){
    for(int i=2;i<=n;i++){
        if(isprime(n)){
        int x=i;
        while(n%i==0){
            cout<<i<<" ";
            x=x*i;
        }
     }
    }
}
int main(){
    int n;
    //cin>>n;
    cin>>n;
    primeFactor(n);
    return 0;
}