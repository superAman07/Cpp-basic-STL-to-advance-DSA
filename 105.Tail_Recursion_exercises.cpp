//this is not the example of tail recursion

#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n==0)return;
    fun(n-1); 
    cout<<n<<" ";
}
int main(){
    fun(5);
    return 0;
}
// //o/p:- 1 2 3 4 5

#include<iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1)return 1;
    return n*fact(n-1);
}
int main(){
    cout<<fact(5);
    return 0;
}



//example of tail recursion
// #include<iostream>
// using namespace std;
// void fun(int n){
//     if(n==0)return;
//     cout<<n<<" ";
//     fun(n-1);
// }
// int main(){
//     fun(5);
//     return 0;
// }
#include<iostream>
using namespace std;
int fact(int n,int k){
    if(n==0||n==1)return k;
    return fact(n-1,n*k);
}
int main(){
    cout<<fact(5,1);
    return 0;
}


// internal working of tail recursion

// #include<iostream>
// using namespace std;
// void fun(int n){
//     start:                             
//     if(n==0)return;
//     cout<<n<<" ";
//     // fun(n-1);
//     n=n-1;  // when we call function recursively it does the changes that we want and goto start (thats the basic working)
//     goto start;
// }
// int main(){
//     fun(5);
//     return 0;
// }
