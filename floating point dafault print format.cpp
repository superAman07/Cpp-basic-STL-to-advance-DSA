#include<bits/stdc++.h>
using namespace std;
int main(){
    double x=1234875.234;
    cout<<x<<"\n";
    double y=124437.79;
    cout<<y;
    double z=124e2;
    cout<<"\n"<<z<<"\n";
    cout<<std::setprecision(5);
    double a=1243223.345,b=14.3358;
    cout<<a<<" = a & b = "<<b<<"\n";
    double c=1.25;
    cout<<std::showpoint<<c<<"\n";
    cout<<showpos<<c<<"\n";            // showpos  shows positive value
    cout<<uppercase<<y<<"\n";
    cout<<std::fixed;                   // it takes precision value after decimal 
    cout<<setprecision(2);
    cout<<x<<" "<<b<<"\n";
    return 0;
}

    //trunc() method

// #include<bits/stdc++.h>
// #include<cmath>
// using namespace std;
// int main(){
//     double a=1.411,b=1.500,c=1.611;
//     cout<<trunc(a)<<"\n";
//     cout<<trunc(b)<<"\n";
//     cout<<trunc(c)<<"\n";
//     double x=-1.411,y=-1.500,z=-1.611;
//     cout<<trunc(x)<<"\n";
//     cout<<trunc(y)<<"\n";
//     cout<<trunc(z)<<"\n";
//     return 0;
// }