#include<bits/stdc++.h>
using namespace std;
// multimap<int,string>mp;
// void add(int price,string name){
//     mp.insert({price,name});
// }
void find(int price){
    for(auto it=mp.find(price);it!=mp.upper_bound(price);it++){
        cout<<(*it).second<<" "<<(*it).first<<"\n";
    }    
}
void find(int price){
    auto ip=mp.equal_range(price);
    for(auto it=ip.first;it!=ip.second;it++){
        cout<<it->second<<' '<<it->first<<"\n";
    }
}
void sorted(){
    for(auto x:mp){
        cout<<x.second<<" "<<x.first<<"\n";
    }
}
void printSmallerSort(int price){
    for(auto it=mp.begin();it!=mp.upper_bound(price);it++){
        cout<<it->second<<" "<<it->first<<"\n";
    }
    // auto it1=mp.lower_bound(price);
    // for(auto it=mp.begin();it!=it1;it++){
    //     cout<<it->second<<" "<<it->first<<"\n";
    // }
}
void printGreaterSorted(int price){
    for(auto it=mp.find(price);it!=mp.end();it++){
        cout<<it->second<<" "<<it->first<<"\n";
    }
}
int main(){
    add(7,"abc");
    add(20,"bcd");
    add(5,"cde");
    add(10,"efg");
    add(20,"ghi");
    // find(5);
    // sorted();
    // printSmallerSort(10);
    printGreaterSorted(10);
    return 0;
}
