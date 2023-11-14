#include<iostream>
#include<set>
#include<bits/stdc++.h>
using namespace std;
set<int>s;

bool search(int x){
    //  auto it=s.find(x);
    //  if(it==s.end()){
    //     return false;
    //  }
    //  else{
    //     return true;
    //  }
    return (s.find(x)!= s.end());
}
void insert(int x){
    s.insert(x);
}
void dlete(int x){
    s.erase(x);
}
int getceiling(int x){
    auto it=s.lower_bound(x);
    if(it==s.end()){
        return INT_MAX;
    }
    else{
        return *it;
    }
}
int getfloor(int x){
    auto it=s.lower_bound(x);
    if(it==s.begin()){
        if(*it==x){
            return *it;
        }
        else{
            return INT_MIN;
        }
    }
    else{
        if(it!=s.end() && *it==x){
            return *it;
        }
        *it--;
        return *it;
    }
}
int main(){
    int x=15,y=25;
    set<int>s;
    s.insert(5);
    s.insert(10);
    s.insert(15);
    s.insert(25);
    s.insert(43);
    s.insert(58);
    // insert(x);
    // cout<<search(x);
    // dlete(y);
    // for(auto x:s){
    //     cout<<x<<" ";
    // }
    // for(auto it=s.begin();it!=s.end();it++){
    //     cout<<*it<<' ';
    // }
    cout<<getceiling(x);
    return 0;
}