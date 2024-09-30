#include<bits/stdc++.h>
using namespace std;
class AAA{
    public:
    AAA(){
        cout<<"A"<<"\n";
    }
};
class BBB{
    public:
    BBB(){
        cout<<"B"<<"\n";
    }
};
class CCC:public AAA,public BBB{
    public:
    CCC(){
        cout<<"C"<<"\n";
    }
};
int main(){
    CCC obj;
    return 0;
}