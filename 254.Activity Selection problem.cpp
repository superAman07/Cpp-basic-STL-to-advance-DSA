#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

void ActivitySelection(vector<pair<int,int>>&arr){
    sort(arr.begin(),arr.end(),[](pair<int,int>p1,pair<int,int>p2){
        return p1.second<p2.second;
    });
    vector<pair<int,int>>res;
    res.push_back(arr[0]);
    for(int i=1;i<arr.size();i++){
        if(arr[i].first<res[i-i].second){
            continue;
        }else{
            res.push_back(arr[i]);
        }
    }
    cout<<"Activities: ";
    for(auto it:res){
        cout<<"{"<<it.first<<","<<it.second<<"}";
    } 
    cout<<"\nSize of activities: "<<res.size();
}
int main(){
    vector<pair<int,int>>arr = {{1,3}, {2, 4},{3,8},{10,11}};
    ActivitySelection(arr);
    return 0;
}
