// those objects which don't have their own find functions

// 1) Array

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]{1,21,42,11,6,7,8};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int *ptr=find(arr,arr+n,11);
//     if(ptr==arr+n){
//         cout<<"Not found\n";
//     }
//     else{
//         cout<<"Found at:"<<(ptr-arr);
//     }
//     return 0;
// }

// 2) Vector

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v{3,2,5,6,12,8,13};
//     int n=v.size();
//     auto it=find(v.begin(),v.end(),12);
//     if(it==v.end()){
//         cout<<"Not Found\n";
//     }
//     else{
//         cout<<"Found at:"<<it-v.begin();
//     }
//     return 0;
// }

// 3) List

#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>l{1,4,6,9,12,7,5};
    int n=l.size();
    auto it=find(l.begin(),l.end(),9);
    if(it==l.end()){
        cout<<"Not Found\n";
    }
    else{
        cout<<"Found";
    }
    return 0;
}