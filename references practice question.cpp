// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int x=10,y=20;
//    int &z=x;
//    z=y;
//    z=z+5;
//    cout<<x<<"\n"<<y<<"\n"<<z<<"\n";
//    return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int &fun(){
//    static int x=10;                   // remember this if we remove static it'll give error  
//    return x;
// }
// int main(){
//    int &y=fun();
//       y=20;
//    cout<<fun();
//    return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="C++",s2=" is best";
    string &&s3=s1+s2;                            // R value (&&)
    s3="You know "+s3;
    cout<<s3<<"\n";
    return 0;
}