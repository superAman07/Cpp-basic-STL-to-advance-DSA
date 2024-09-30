#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int c=0;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            c+=1;
        }
    }
    if(c==1){
        cout<<"yes"<<"\n";
    }
    else{
        cout<<"no"<<"\n";
    }
   
    return 0;
}