#include<iostream>
using namespace std;
void maxHeapify(int arr[], int n,int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    if(left<n && arr[left]>arr[largest])largest=left;
    if(right<n && arr[right]>arr[largest])largest=right;
    if(largest!=i){
        swap(arr[i],arr[largest]);
        maxHeapify(arr,n,largest);
    }
}
// to build heap
void buildHeap(int arr[],int n){
    for(int i=(n-2)/2;i>=0;i--){
        maxHeapify(arr,n,i);
    }
}
void heapSort(int arr[],int n){
    buildHeap(arr,n);
    for(int i=n-1;i>=1;i--){
        swap(arr[0],arr[i]);
        maxHeapify(arr,i,0);
    }
}
int main(){
    int arr[]{10,15,50,4,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
