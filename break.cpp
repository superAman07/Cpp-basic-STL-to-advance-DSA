//non zero minimum factor of number
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            cout<<i<<"\n";
            break;
           
        }
    }
    return 0;

}