// #include<iostream>
// #include<vector>
// using namespace std;
// vector<vector<int>>transposeOfMat(vector<vector<int>>&v,int n, int m){
//     vector<vector<int>>res(n,vector<int>(m));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             res[j][i]=v[i][j];
//         }
//     }
//     return res;
// }
// int main(){
//     vector<vector<int>>v{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     int n=4;
//     int m=4;
//     vector<vector<int>>res = transposeOfMat(v,n,m);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<res[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
const int n=4;
const int m=4;

void TransposeOfMat(int arr[][m]){
    int res[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            res[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<res[i][j]<<' ';
        }
        cout<<"\n";
    }
}
int main(){
    int arr[n][m]{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    TransposeOfMat(arr);
    return 0;
}
