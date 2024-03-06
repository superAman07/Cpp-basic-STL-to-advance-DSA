#include<iostream>
#include<algorithm>
using namespace std;
const int n=3;
const int m=5;
int matMed(int arr[n][m]){
    int min = arr[0][0],max= arr[0][m-1];
    for(int i=1;i<n;i++){
        if(arr[i][0]<min) min=arr[i][0];
        if(arr[i][m-1]>max) max=arr[i][m-1];
    }
    int medPos = (n*m+1)/2;
    while(min<max){
        int mid=(min+max)/2;
        int midPos=0;
        for(int i=0;i<n;i++){
            midPos+=upper_bound(arr[i],arr[i]+m,mid)-arr[i];
        }
        if(midPos<medPos)min=mid+1;
        else max=mid;
    }
    return min;
}
int main(){
    int arr[][m]{{5,10,20,30,40},{1,2,3,4,6},{11,13,15,17,19}};
    cout<<matMed(arr);
    return 0;
}
