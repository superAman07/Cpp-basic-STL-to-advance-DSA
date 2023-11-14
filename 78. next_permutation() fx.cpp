 // next_permutation() fx
#include<iostream>
#include<algorithm>
using namespace std;
void nextPermutation(vector<int>&v){
    next_permutation(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
}
int main(){
    vector<int>v{1,2,5,4,3};
    nextPermutation(v);
    return 0;
}