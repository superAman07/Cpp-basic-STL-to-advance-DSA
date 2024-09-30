#include<bits/stdc++.h>
using namespace std;
//int main(){
//    int a[] {10,20,30,40};
//    for(auto x:a){
//    x*=2;                                          //this line has no effect so to resolve it have a look on below program
//    }
//    for(int x:a){
//    cout<<x<<" ";
//    }
//    return 0;
//}


// int main(){
//    int a[] {10,20,30,40};
//    for(auto &x:a){                                   //the & emphorsent is the resolution of above program
//        x*=2;
//    }
//    for(int x:a){
//        cout<<x<<" ";
//    }
//    return 0;
// }

//int main(){
//    string a[] {"C","C+","C++"};
//    for(auto x:a){                                           // every time it will copy the declared string it will resolved in below prog
//        cout<<x<<"\n";
//    }
//    return 0;
//}

int main(){
    string a[] {"C","C#","C++"};
    for(const auto &s:a)
    cout<<s<<" ";
    return 0;
}
