#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    // vector < int >v1{ 2 , 4 , 15 , 10 , 30 };
    vector < int >v1{ 2 , 4 , 15 , 10 , 30 ,20};
    // vector < int >v2{ 15 , 2 , 10 , 30 , 4 };
    vector < int >v2{ 15 , 2 , 10 , 30 , 4 ,15};
    if(is_permutation(v1.begin(),v1.end(),v2.begin())){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    return 0;
}

// for array

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr1[]{2 , 4 , 15 , 10 , 30};
//     int arr2[]{15 , 2 , 10 , 30 , 4 };
//     if(is_permutation(arr1,arr1+5,arr2))
//        cout<<"Yes\n";
//     else
//        cout<<"No\n";
//     return 0;
// }