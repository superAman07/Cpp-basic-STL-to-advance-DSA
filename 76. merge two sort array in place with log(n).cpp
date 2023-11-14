#include<iostream>
#include<algorithm>
using namespace std;
void merg_two_sort_array(vector<int>&a,vector<int>&b){
    int n=a.size();
    int m=b.size();
    for(int i=0;i<n;i++){
        if(a[i]>b[0]){
            pop_heap(b.begin(),b.end(),greater<int>());
            swap(a[i],b[m-1]);
            push_heap(b.begin(),b.end(),greater<int>());
        }
    }
    sort_heap(b.begin(),b.end());
    for(auto x:a){
        cout<<x<<" ";
    }
    cout<<"\n";
    for(auto x:b){
        cout<<x<<" ";
    }
}
int main(){
    vector<int>a{3,20,40};
    vector<int>b{2,10,12};
    merg_two_sort_array(a,b);
    return 0;
}