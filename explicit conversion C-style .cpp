//C-style EXPLICIT conversion
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=15,y=2;
    double z=double(x)/y;   //if we do this [double z=x/y;] then get 7 this is done without EXPLICIT
    cout<<z;
    return 0;
}
// #This is C-style conversion