#include<bits/stdc++.h>
using namespace std;
void thief_prob_solve(vector<int>&v,int k){
    int n=v.size()-k;
    sort(v.begin(),v.end(),greater<int>());// 30 12 7 5 3 2
    int res=0;
    cout<<accumulate(v.begin(),v.end()-n,res)<<"\n";
    
}
int main(){
    vector<int>v{3,7,2,5,12,30};
    // vector<int>v{8,10,2,50,80,20};
    int k=3;
    thief_prob_solve(v,k);
    return 0;
}