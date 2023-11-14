  // merge() fx in vector

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v1{15,25,35,12};
//     vector<int>v2{5,10,20,30};
//     int n=v1.size(),m=v2.size();
//     vector<int>v3(n+m);
//     merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
//     for(auto x:v3){
//         cout<<x<<" ";
//     }
//     return 0;
// }

  // merge fx in array

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr1[]{7,19,37};
    int arr2[]{10,15,17};
    int n=sizeof(arr1)/sizeof(arr1[0]); 
    int m=sizeof(arr2)/sizeof(arr2[0]); 
    int arr3[n+m];
    merge(arr1,arr1+n,arr2,arr2+m,arr3);
    for(auto i:arr3){
        cout<<i<<" ";
    }
    return 0;
}