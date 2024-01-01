#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(10);
    v.push_back(17);
    v.push_back(27);
    for(int i=0;i<v.size();i++){
       // cout<<v[i]<<" "; // it doesn't do array index out of bound (in this example if cout<<v[3 or more]) checking
       cout<<v.at(i)<<" ";  // it does.......
    }
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v{10,17,27};
    for(int &x:v){
        cout<<x<<" ";
    }
    return 0;
}

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v{10,17,27};
//     for(int &x:v)
//     x=7;
//     for(int x:v){
//         cout<<x<<" ";
//     }
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n=3,x=27;
//     vector<int>v(n,x);
//     for(auto it=v.begin();it!=v.end();it++){
//         cout<<*it<<" ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]{10,17,27};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector<int>v(arr,arr+n);
//     for(auto it=v.rbegin();it!=v.rend();it++){
//         cout<<*it<<' ';
//     }
//     return 0;
// }

   // same program using class

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class revers{
    revers(int arr[],int n){
        vector<int>v(arr,arr+n);
        for(auto it=v.rbegin();it!=v.rend();it++){
            cout<<*it<<" ";
        }
    }
};
int main(){
    int arr[]{7,27,28};
    int n=sizeof(arr)/sizeof(arr[0]);
    revers r(*arr,n);
    return 0;
}
