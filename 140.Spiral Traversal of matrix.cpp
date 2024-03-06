#include<iostream>
using namespace std;
const int n=4;
const int m=4;
void printSpiral(int arr[][m]){
    int left=0,right=m-1,top=0,bottom=n-1;
    while(left<=right && top<=bottom){
        for(int i=left;i<=right;i++){
            cout<<arr[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right]<<" ";
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                cout<<arr[bottom][i]<<" ";
            }
            bottom--;
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    cout<<arr[i][left]<<" ";
                }
                left++;
            }
        }
    }
}
int main(){
    int arr[][m]{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    printSpiral(arr);
    return 0;
}
