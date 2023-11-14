// #include<iostream>
// #include<utility>
// using namespace std;
// int main(){
//     pair<int, int>p1(10,17); //if pair<int,int>p1;  --> output as 0 0 (as it is default)
//     pair<int,string>p2(27,"Alien");
//     cout<<p1.first<<" "<<p1.second<<"\n";
//     cout<<p2.first<<" "<<p2.second<<"\n";
//     return 0;
// }

//#include<utility>
//#include<iostream>
//using namespace std;
//int main(){
//    pair<int,int>p1,p2;    // we can initialise it like this
//    p1={10,17};
//    cout<<p1.first<<" "<<p1.second<<"\n";
//    p2=make_pair(27,28);
//    cout<<p2.first<<" "<<p2.second<<"\n";
//    pair<int,string>p3(28,"superAman");
//    cout<<p3.first<<" "<<p3.second<<"\n";
//    return 0;
//}

   // Comparison of pairs

#include<utility>
#include<iostream>
using namespace std;
int main(){
    pair<int,int>p1(10,17),p2(27,28);
    cout<<(p1==p2)<<"\n";
    cout<<(p1!=p2)<<"\n";
    cout<<(p1>p2)<<'\n';
    cout<<(p1<p2)<<'\n';
    return 0;
}