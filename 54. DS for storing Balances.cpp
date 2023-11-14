// Naive solution O(n)
// #include<bits/stdc++.h>
// using namespace std;
// vector<pair<int,int>>v;
// void get(int id){
//     for(auto i:v){
//         if(i.first==id){
//             cout<<i.second<<"\n";
//         }
//     }
// }
// void set1(int id,int bal){                          
//     for(auto i:v){
//         if(i.first==id){
//             i.second=bal;
//             return;
//         }
//     }
//     v.push_back({id,bal});
// }
// int main(){
//     set1(1,100);
//     get(1);
//     set1(2,422);
//     get(2);
//     set1(1,300);
//     get(1);
//     return 0;
// }

   // efficient solution  O(1)

#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<int,int>m;
void set(int id,int bal){
    m[id]=bal;         //it can update the value#                        //O(1)
    // m.insert({id,bal});  // it will not update the value
}
int get(int id){
    return m[id];
}
int main(){
    set(1,200);
    cout<<get(1)<<"\n";
    set(2,422);
    cout<<get(2)<<"\n";
    set(1,300);
    cout<<get(1)<<"\n";
    return 0;
}










// #include<bits/stdc++.h>
// using namespace std;
// unordered_map<int,int>m;
// void set(int x,int y){
//     m.insert(x,y);
// }
// void get(int x){
//     cout<<m.begin()->second<<"\n";
// }
// int main(){
//     unordered_map<int,int>m;
//     set(1,100);
//     get(1);
//     return 0;
// }