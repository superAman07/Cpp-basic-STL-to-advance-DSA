//Better that nlog(n) by sort function
#include<iostream>
using namespace std;
int lPartition(int arr[],int l,int h){
    int pivot = arr[h];
    int i = l-1;
    for(int j=l;j<h;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}
int kthElement(int arr[],int n,int k){
    int l = 0, h= n-1;
    while(l<=h){
        int p = lPartition(arr,l,h);
        if(p==k-1){
            return arr[p];
        }
        else if(p>k-1){
            h = p-1;
        }
        else{
            l = p+1;
        }
    }
    return -1;
}
int main(){
    int arr[]{10,4,5,8,11,6,26};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =5;
    cout<<kthElement(arr,n,k)<<" ";
    return 0;
}
