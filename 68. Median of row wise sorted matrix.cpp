#include<bits/stdc++.h>
using namespace std;
void median_of_sorted(vector<vector<int>>&v){
    double n=v.size();
    set<int>s;
    sort(v.begin(),v.end());
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            s.insert(v[i][j]);
        }
    }
    int count=0,middle;      // insufficien sol^n
    int middle_index=n/2;
    for(auto i:s){
        if(count==middle_index){
            middle=i;
            break;
        }
        count++;
    }
    cout<<middle_index<<" ";
}
int main(){
    vector<vector<int>>v{{1,10,20},{15,25,35},{5,30,40}};
    median_of_sorted(v);
    return 0;
}