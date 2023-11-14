#include<iostream>
using namespace std;
// bool fun(int n){
//     if(n==0)return false;
//     while(n!=1){
//         if(n%2!=0){
//             return false;
//         }
//         n/=2;
//     }
//     return true;
// }
   // more efficient
 
// bool fun(int n){
//     if(n==0)return false;
//     return ((n&(n-1))==0);
// }
bool fun(int n){
    return ((n!=0) && ((n & (n-1))==0));
}
int main(){
    int n;
    cin>>n;
    cout<<boolalpha<<fun(n);
    return 0;
}