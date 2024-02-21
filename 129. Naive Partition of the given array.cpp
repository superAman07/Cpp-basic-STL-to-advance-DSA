// Partition algorithms

1:- Naive partition

#include<iostream>
using namespace std;
int main(){
    // int arr[]{3,8,6,12,10,7};
    int arr[]{5,13,6,9,12,11,8};
    int p= 6;
    int n= sizeof(arr)/sizeof(arr[0]);
    int i=0;
    while(i<n){
        if(arr[i]<arr[p]){
            cout<<arr[i]<<" ";
        }
        i++;
    }
    cout<<arr[p]<<" ";
    i=0;
    while(i<n){
        if(arr[i]>arr[p]){
            cout<<arr[i]<<" ";
        }
        i++;
    }
    return 0;
}
2:- Lomuto Partition (in linear TC and constant space)
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
    // int arr[]{10,80,30,90,40,50,70};
    // int arr[]{70,60,80,40,30};
    int arr[]{30,40,20,50,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    int l = 0;
    int h = n-1;
    cout<<lPartition(arr,l,h)<<"\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


3:- Hoare's Partition (better than Lomuto partition)

#include<iostream>
using namespace std;
int HPartition(int arr[],int l,int h){
    int pivot = arr[l];
    int i = l-1;
    int j = h+1;
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j){
            return j;
        }
        swap(arr[i],arr[j]);
    }
}
int main(){
    int arr[]{5,3,8,4,2,7,1,10};
    int h = sizeof(arr)/sizeof(arr[0]);
    int l = 0;
    cout<<HPartition(arr,l,h)<<"\n";
    for(int i=0;i<h;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

In partition, basically all left elements after partition should be smaller than the right elements... And Hoare's Partition is bettern than other partition algorithms but 
there is one flaw where Lomuto Partition is better is that, In Hoare's partition the output array, Pivot element should not be its right position and except this Hoare's
algorithm is better...
