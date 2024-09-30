//Size of Array
#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int arr[] {1,21,43,54,76,11};
    cout<<"Size of array in Bits "<<sizeof(arr)<<"\n";
     
    cout<<"No. of elements in array "<<sizeof(arr)/sizeof(arr[0])<<"\n";
    return 0;
}