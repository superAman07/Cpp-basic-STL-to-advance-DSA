#include<bits/stdc++.h>
using namespace std;
void fx1() throw(int){
    cout<<"f1 begins\n";
    throw 100;
    cout<<"End\n";
}
void fx2() throw(int){
    cout<<"f2 begins\n";
    fx1();
    cout<<"f2 ends\n";
}
int main(){
    try{
        fx2();
    }
    catch(int i){
        cout<<"caught exception\n";
    }
    cout<<"Bye"<<"\n";
    return 0;
}