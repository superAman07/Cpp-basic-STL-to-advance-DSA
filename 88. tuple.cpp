// #include<iostream>
// #include<tuple>
// using namespace std;
// int main(){
//     tuple<string, int ,string>t= make_tuple("Vegeta", 17, "Goku");
//     // cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<"\n";
//     const int i=0;
//     cout<<get<i>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<"\n";
//     get<0>(t)="Gogeta";
//     cout<<get<0>(t)<<"\n";
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     tuple<char, int ,int >t('A',20,40);
//     cout<<tuple_size<decltype(t)>::value<<"\n";
//     char x;
//     int y,z;
//     tie(x,y,z)=t;
//     cout<<x<<" "<<y<<" "<<z;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     tuple<char,int, int>t('a',9,3);
//     cout<<tuple_size<decltype(t)>::value<<"\n";
//     char a;
//     int z;
//     tie(a,ignore,z);
//     cout<<a<<" "<<z;
//     return 0;
// }

// tuple concatination

#include<bits/stdc++.h>
using namespace std;
int main(){
    tuple<int,int>t1(12,52);
    tuple<int,int>t2(7,8);
    auto t3=tuple_cat(t1,t2);
    cout<<get<0>(t3)<<" "<<get<3>(t3)<<"\n";
    return 0;
}