// simple O(n^2) time and O(1) space solution

// #include<iostream>
// using namespace std;
// const int m=4;
// const int n=4;
// void rotateMatrixBy90(int arr[][m]){
//     for(int i=m-1;i>=0;i--){
//         for(int j=0;j<n;j++){
//             cout<<arr[j][i]<<" ";
//         }
//         cout<<"\n";
//     }
// }
// int main(){
//     int arr[][m]{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     rotateMatrixBy90(arr);
//     return 0;
// }

// more efficient than above 
// first do transpose then  reverse each row.
#include<iostream>
// #include<algorithm>
using namespace std;
const int n=4;
const int m=4;
void rotateMatrixBy90(int arr[][m]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        int low=0, high =n-1;
        while(low<high){
            swap(arr[low][i],arr[high][i]);
            low++;
            high--;
        }
    }
    // for(int i=0;i<n;i++){   // for clockwise rotation by 90 deg
    //     reverse(arr[i],arr[i]+m);
    // }
}
int main(){
    int arr[][m]{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    rotateMatrixBy90(arr);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
