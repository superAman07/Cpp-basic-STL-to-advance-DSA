#include<bits/stdc++.h>
#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
    auto a=5;
    auto b=10.5;
    cout<<a<<"\t"<<typeid(a).name()<<"\n";
    cout<<b<<"\t"<<typeid(b).name();
    return 0;
}