// Quick sort using Lomuto and Hoare's algorithm 

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
void quickSortL(int arr[],int l, int h){
    if(l<h){
        int p = lPartition(arr,l,h);
        quickSortL(arr,l,p-1);
        quickSortL(arr,p+1,h);
    }
}
int Hpartition(int arr[],int l ,int h){
    int pivot = arr[l];
    int i = l-1,j= h+1;
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)return j;
        swap(arr[i],arr[j]);
    }
}

void quickSortH(int arr[],int l,int h){
    if(l<h){
        int p = Hpartition(arr,l,h);
        quickSortH(arr,l,p);
        quickSortH(arr,p+1,h);
    }
}
int main(){
    int arr[]{10,80,30,90,40,50,70};
    // corner case 1: int arr[]{70,60,80,40,30};
    // corner case 2: int arr[]{30,40,20,50,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    int l = 0;
    int h = n-1;
    quickSortL(arr,l,h);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    quickSortH(arr,l,h);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
