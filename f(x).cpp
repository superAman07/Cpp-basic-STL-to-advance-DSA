#include<iostream>
using namespace std;
int function(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
int main(){
    int x,y;
    cin>>x>>y;
    int res=function(x,y);
    cout<<res;
    return 0;
}