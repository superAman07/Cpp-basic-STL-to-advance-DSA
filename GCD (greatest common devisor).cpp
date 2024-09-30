#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
     cin>>a>>b;
     int ans=1;
     int x=min(a,b);
     for(int i=1;i<x;i++){
        if(a%i==0 and b%i==0){
            ans=i;
        }  
     }
     cout<<ans<<"\n";
    return 0;
}