#include<bits/stdc++.h>
using namespace std;
void smalltogreater(int a[],int n){
    vector<pair<int,int>>b;
    for(int i=0;i<n;i++){
        // b.push_back({a[i],i});  //
        b.push_back(make_pair(a[i],i));
        sort(b.begin(),b.end());
        for(auto x:b){
            cout<<x.first<<" "<<x.second<<"\n";
        }
    }
}
int main(){
    int n=4;
    int a[]{20,40,30,10};
    smalltogreater(a,n);
    return 0;
}
