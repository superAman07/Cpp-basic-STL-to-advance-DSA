#include<bits/stdc++.h>
using namespace std;

//int main(){
//    for(int i=0;i<4;i++){
//        for(int j=0;j;j++){
//            cout<<"*"<<" ";
//           
//        }
//        cout<<"\n";
//    }
//    return 0;
//}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i+j)<(n+1)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    return 0;
}