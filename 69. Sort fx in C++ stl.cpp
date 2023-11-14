// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[]{38,29,10,17,19};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     sort(arr,arr+n);
//     cout<<"Increasing order: ";
//     for(auto i:arr){
//         cout<<i<<" ";
//     }
//     sort(arr,arr+n,greater());
//     cout<<"\nDecreasing order:";
//     for(int i:arr){
//         cout<<i<<" ";
//     }
//     return 0;
// }


// Vector

// #include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void func(vector<int>&v){
//     sort(v.begin(),v.end());
//     cout<<"Increasing Order:";
//     for(auto i:v){
//         cout<<i<<" ";
//     }
//     cout<<"\n Decreasing order:";
//     sort(v.begin(),v.end(),greater());
//     for(auto i:v){
//         cout<<i<<" ";
//     }
// }
// int main(){
//     vector<int>v{13,19,20,29,24,50};
//     func(v);
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
class point{
    public:
    int x,y;
};
bool mycmp(point p1, point p2){
    // return p1.x>=p2.x;
    return p1.y>=p2.y;
    // return p1.x<p2.x;
}
int main(){
    point arr[]{{2,10},{5,13},{10,31}};
    sort(arr,arr+3,mycmp);
    for(auto i:arr){
        cout<<i.x<<" "<<i.y<<"\n";
    }
    return 0;
}