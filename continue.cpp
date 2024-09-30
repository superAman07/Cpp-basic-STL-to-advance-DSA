#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter the value of n: "<<"\n";
    cin>>n;
    cout<<"Enter the value which you want to skip: "<<"\n";
    cin>>x;
    for(int i=1;i<=n;i++){
         if(i!=x){
            cout<<i<<"\t";
            continue;
         }
    }
    return 0;

}