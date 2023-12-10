#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void func(vector<int> &v){
    v.push_back(10);
    v.push_back(17);
}
int main(){
    vector<int>v{2,37,49};
    func(v);
    for(auto x:v){
        cout<<x<<" ";
    }
    return 0;
}
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// void fun(const vector<int>&v){
//     for(auto x:v){
//         cout<<x<<" ";
//     }
// }
// int main(){
//     vector<int>v{10,20,30,40};
//     v.insert(v.begin(),10);
//     fun(v);
//     return 0;
// }
