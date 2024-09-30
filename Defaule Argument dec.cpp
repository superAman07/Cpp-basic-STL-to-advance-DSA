#include<iostream>
#include<cstdio>
using namespace std;
int addition(int a,int b,int c=0,int d=0);
int main(){
    cout<<addition(10,20,50)<<"\n";
    return 0;
}
int addition(int a, int b, int c,int d){
    return(a+b+c+d);
}
//void addition(int a,int b,int c,int d){
//    cout<<a+b+c+d;
//}