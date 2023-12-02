#include<iostream>
using namespace std;
int main(){
    int arr[]{10,20,20,30,30,30,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[i+1]){
            x++;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            swap(arr[i+1],arr[i+2]);
        }
    }
    for(int i=0;i<x;i++){
        cout<<arr[i]<<" ";
    } 
    return 0;
}
