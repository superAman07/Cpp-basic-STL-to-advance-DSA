// #include<iostream>
// using namespace std;
// int main(){
//     int n=2,m=3;
//     int arr[m][n];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             arr[i][j]=i+j;
//             cout<<arr[i][j]<<" ";
//         }
//     }
//     return 0;
// }

// Other way to create multidimentional array

// 1) Double Pointer

// #include<iostream>
// using namespace std;
// int main(){
//     int m=3,n=2;
//     int **arr;
//     arr = new int *[m];
//     for(int i=0;i<m;i++){
//         arr[i]=new int [n];
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             arr[i][j]=i+j;
//             cout<<arr[i][j]<<" ";
//         }
//     }
//     return 0;
// }

//2:  Using array of pointers

// #include<iostream>
// using namespace std;
// int main(){
//     int m=3,n=2;
//     int *arr[m];
//     for(int i=0;i<m;i++){
//         arr[i]=new int [n];
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             arr[i][j]=i+j;
//             cout<<arr[i][j]<<" ";
//         }
//     }
//     return 0;
// }

// 3 Array of vectors
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int m=3,n=2;
//     vector<int>arr[m];
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             arr[i].push_back(i+j);
//             cout<<arr[i][j]<<" ";
//         }
//     }
//     return 0;
// }

// 4) Using Vector of vectors

#include<bits/stdc++.h>
using namespace std;
int main(){
    int m=3;
    int n=2;
    vector<vector<int>>arr;
    for(int i=0;i<m;i++){
        vector<int>temp;
        for(int j=0;j<n;j++){
            temp.push_back(i*i+j);
        }
        arr.push_back(temp);
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}
