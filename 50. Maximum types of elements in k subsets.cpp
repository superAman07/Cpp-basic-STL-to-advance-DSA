#include<iostream>
#include<unordered_set>
using namespace std;
int maximum_type_of_elements_in_k_subset(int arr[],int k,int n){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int d=s.size();
    if(d>=(n/k)){
        return (n/k);
    }
    else{
        return (d);
    }
}
int main(){
    // int arr[]{1,1,2,3,1,5,1,2};
    // int k=2;
    // int arr[]{1,1,2,1,3,1};
    // int k=3;
    int arr[]{1,1,1,1,1,1,1,1};
    int k=4;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maximum_type_of_elements_in_k_subset(arr,k,n);
    return 0;
}