// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v{10,20,20,20,30,40};
//     auto it=upper_bound(v.begin(),v.end(),20);
//     cout<<*it<<" "<<"position :"<<it-v.begin()<<"\n";
//     it=upper_bound(v.begin(),v.end(),34);
//     cout<<*it<<"\n";
//     it=upper_bound(v.begin(),v.end(),50);
//     cout<<"Element is at v.end() is :"<<*it<<" at "<<it-v.begin();
//     return 0;
// }

  // find element 

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{10,20,20,20,30,40};
    int x=35;
    auto it=upper_bound(v.begin(),v.end(),x);
    if(it!=v.end() && *(it-1)==x){
        cout<<"Found\n";
    }
    else
        cout<<"Not found\n";
    return 0;
}