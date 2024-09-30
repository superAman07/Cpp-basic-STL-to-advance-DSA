#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    int x=7;
};
class B:virtual public A{
    public:
    B(){
        cout<<"B inherit from class A"<<"\n";
    }
};
class C:virtual public A{
    public:
    C(){
        cout<<"C is also inherit from class A"<<"\n";
    }
};
class D:public B,public C{
    public:
    D(){
        cout<<"D is inherit from B & C"<<"\n";
    }
};
int main(){
    D d;
    cout<<d.x<<"\n";
    return 0;
}