#include<bits/stdc++.h>
using namespace std;
//void fun(int x){
//    x=x+7;
//}
//int main(){
//    int x=10;
//    fun(x);
//    cout<<x;                                       // it'll results as 10 thats the problem  
//    return 0;
//}


// resolution of above program 

//void func(int &x){
//    x=x+7;
//}
//int main(){
//    int x=10;
//    func(x);
//    cout<<x;
//    return 0;
//}

void fun(const string s){
    cout<<s;
}                                                   //void fun(string s){           here the problem is that when the fun is call in main f(x)
int main(){                                         //    cout<<s;                  the fun's string copy's the main fun's string so that there is 
    string s="C-- is also good";                    //}                             the performance issue......
    fun(s);                                         //int main(){
    return 0;                                       //    string s="C++ is better";
   }                                                //    fun(s);
                                                    //    return 0;
                                                    //}