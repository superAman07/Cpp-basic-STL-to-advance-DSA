// chocolate distribution difference b/w min and max should be min

#include<bits/stdc++.h>
using namespace std;
void chocolate_disrtibution(vector<int>&v,int m){
     sort(v.begin(),v.end());
     int res=v[m-1]-v[0];
     for(int i=0;i+m-1<v.size();i++){
        res=min(res,v[i+m-1]-v[0]);
     }
}
int main(){
    // vector<int>v{7,3,2,4,9,12,56};
    vector<int>v{3,4,1,9,56,7,9,12};
    // int m=3;
    int m=5;
    chocolate_disrtibution(v,m);
    return 0;
}