#include<bits/stdc++.h>
using namespace std;
int main(){
    double x=14.56543,y=1234,z=1.2e+7;
    //cout<<std::fixed;                     //it gives in normal format
    cout<<std::scientific;                 //gives the value in power of "e"format
    cout<<std::setprecision(2);
    cout<<x<<" "<<y<<"\n";
    cout<<showpos;
    cout<<z;
    return 0;

}