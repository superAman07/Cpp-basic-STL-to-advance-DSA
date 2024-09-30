//BITWISE OPERATOR
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=3,y=6;
    cout<<(x&y)<<"\n";              // 1
    cout<<(x|y)<<"\n";              // 2
    cout<<(x^y)<<"\n";              // 3
    cout<<(x<<1)<<"\n";         // Left shift operator can be writtn in if (x<<y) then x*2^y;    //4
    cout<<(x<<2)<<"\n";
    cout<<(x<<4)<<"\n";
    x=33;
    cout<<(x>>1)<<"\n";         // Right shift operator can be written in if (x>>y) then "floor" of x/2^y;      //5
    cout<<(x>>3)<<"\n";
    y=4;
    int z=(x>>y);
    cout<<z<<"\n";
    unsigned int a=1;
    cout<<~a<<"\n";             // 6       Bitwise NOT;
    a=5;
    cout<<~a<<"\n";
    return 0;
}