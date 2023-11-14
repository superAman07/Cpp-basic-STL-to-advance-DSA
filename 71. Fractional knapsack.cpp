#include<bits/stdc++.h>
using namespace std;
bool myCmp(pair<int,int>a,pair<int,int>b){
    double r1=static_cast<double>(a.first/a.second);
    double r2=static_cast<double>(b.first/b.second);
    return r1>r2;
}
void Fractional_knapsack(vector<pair<int,int>>&v,int capacity){
    sort(v.begin(),v.end(),myCmp);
    double total=0;
    for(int i=0;i<v.size();i++){
        if(v[i].second<=capacity){
            total+=v[i].first;
            capacity-=v[i].second;
        }
        else{
            total=total+v[i].first * static_cast<double>(capacity/v[i].second);
        }
    }
    cout<<total<<"\n";
     
}
int main(){
    vector<pair<int,int>>v{{120,30},{100,20},{60,10}};
    int capacity=50;
    Fractional_knapsack(v,capacity);
    return 0;
}