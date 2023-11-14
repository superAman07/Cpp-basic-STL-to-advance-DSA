 // In vector

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v{10,20,30,40,50,60};
//     rotate(v.begin(),v.begin()+3,v.end());
//     for(auto i:v){
//         cout<<i<<" ";
//     }
//     return 0;
// }

   // In array

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]{100,200,300,400,500,600};
    rotate(arr,arr+3,arr+6);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}