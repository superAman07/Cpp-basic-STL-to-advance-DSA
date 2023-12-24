  // vector

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v{10,20,20,20,30,40};
    auto it=lower_bound(v.begin(),v.end(),20);
    cout<<*it<<" ";
    it=lower_bound(v.begin(),v.end(),25);
    cout<<*it<<" ";
    it=lower_bound(v.begin(),v.end(),50);
    cout<<"Element Before last i.e., v.end() "<<*it<<" and index is "<<it-v.begin()<<"\n";  
    return 0;
}

    // array

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]{10,20,20,20,30,40};
    auto it=lower_bound(arr,arr+6,20);
    cout<<*it<<" ";
    it=lower_bound(arr,arr+6,25);
    cout<<(*it)<<" ";
    it=lower_bound(arr,arr+6,50);
    cout<<"\nElement is at last in array "<<*it<<" position is "<<it-arr;
    return 0;
}


   // BST

#include<iostream>
using namespace std;
int main(){
    int arr[]{10,20,20,20,30,40};
    auto it=lower_bound(arr,arr+6,21);
    if(it==(arr+6)|| (*it)!=20){
        cout<<"Not found\n";
    }
    else
        cout<<"found\n";
    return 0;
}
