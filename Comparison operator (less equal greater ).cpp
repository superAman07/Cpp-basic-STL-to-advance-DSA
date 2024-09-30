  //three way comparison operator
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=10, y=20;
    auto res = x<=>y;                    // this operstor is added in C++ 20
    if(res<0){
        cout<<"x is negative"<<"\n";
    }
    else if(res>0){
        cout<<"x is greater"<<"\n";
    }
    else{
        cout<<"x is same"<<"\n";
    }
    return 0;
}