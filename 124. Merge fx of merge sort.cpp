#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high){
    int n1 = mid - low + 1;
    int n2 = high - mid;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++)
        L[i] = arr[low + i];
    for(int j=0;j<n2;j++)
        R[j] = arr[mid + 1 + j];
    int i=0,j=0,k=low;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int l,int r){
    if(r>l){
        int mid = l + (r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int main(){
    // int arr[]{10,15,20,11,30};
    // int arr[]{5,8,12,14,7};
    int arr[]{10,15,20,40,8,11,55};
    int n= sizeof(arr)/sizeof(arr[0]);
    int low = 0;
    int mid = 3;
    int high = 5;
    // MergeFunction(arr,low,mid,high);
    mergeSort(arr,low,high);
    cout<<"Sorted array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
