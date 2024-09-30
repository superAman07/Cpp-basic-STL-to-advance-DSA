//#include<bits/stdc++.h>
//using namespace std;
//void fun(){
//    cout<<"C++ is best"<<"\n";
//}
//int main(){
//    void (*fun_ptr)()=&fun; //amphorsant is optional. In C++,fx name is enough to get the address of fx
//    (*fun_ptr)(); // fun_ptr(); it also work
//    return 0;
//}
//


   // using auto key word to get the address of fx
   
//#include<bits/stdc++.h>
//using namespace std;
//void fun(){
//    cout<<"C++ is best\n";
//}
//int main(){
//    auto fun_ptr=fun;
//    fun_ptr();
//    return 0;
//
//}

#include<bits/stdc++.h>
using namespace  std;
int fun(int x,int y){
    return x+y;
}
int main(){
    auto fun_ptr=fun; // int (*fun_ptr)(int,int)=&fun;
    cout<<fun_ptr(10,17);
    return 0;
}