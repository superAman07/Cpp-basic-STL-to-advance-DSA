//print all the numbers smaller than equal to n that are not multiple of x
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cout<<"Enter the number and number u want operation on it: ";
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        if(i%x==0){                                            //if(i%x != 0){                                                       //
            continue;                                          //        cout<<i<<" ";
        }                                                      // }
        else{                                                 
            cout<<i<<" ";                      
        }                      
    }
    return 0;
}
