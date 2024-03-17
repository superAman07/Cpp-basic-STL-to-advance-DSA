#include<iostream>
#include<unordered_map>
using namespace std;
void printNbyK(int arr[],int n,int k){
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }
    for(auto &i:map){
        if(i.second>n/k){
            cout<<i.first<<" ";
        }
    }
    return;
}
int main(){
    int arr[]{30,10,20,20,10,20,30,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k= 4;
    printNbyK(arr,n,k);
    return 0;
}
