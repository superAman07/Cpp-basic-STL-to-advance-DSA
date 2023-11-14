// #include<bits/stdc++.h>
// using namespace std;
// void fun(int n){
//     if(n==0)return;
//     cout<<n<<"\n";
//     fun(n-1);
//     cout<<n<<"\n";
// }
// int main(){
//   fun(3);
//   return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// // void fun(int n){
// //   if(n==0)return;
// //   fun(n-1);
// //   cout<<n<<"\n";
// //   fun(n-1);
// // }
// int fun(int n){
//   if(n==1)return 0;
//   else return 1+fun(n/2);
// }
// int main(){
//   cout<<fun(16);
//   return 0;
// }


// for decimal to binary

#include<bits/stdc++.h>
using namespace std;
void fun(int n){
  if(n==0)return;
  fun(n/2);
  cout<<(n%2);
}
int main(){
  fun(8);
  return 0;
}