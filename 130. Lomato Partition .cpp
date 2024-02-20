#include<iostream>
using namespace std;
int lPartition(int arr[],int l,int h){
    int pivot = arr[h];
    int i= l-1;
    for(int j=l;j<h;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[h],arr[i+1]);
    return i+1;
}
int main(){
    int arr[]{10,80,30,90,40,50,70};
    // corner case 1: int arr[]{70,60,80,40,30};
    // corner case 2: int arr[]{30,40,20,50,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    int l = 0;
    int h = n-1;
    cout<<lPartition(arr,l,h)<<"\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
