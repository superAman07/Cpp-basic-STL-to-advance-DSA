#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string BinarySearch(vector<int>&v,int n,int x){
    int low = 0;
    int flag=0,count = 0;
    int high = n-1;
    while(high>=low){
        count++;
        int mid = (high + low)/2;
        if(v[mid]==x){
            flag = 1;
            break;
        }
        else if(v[mid]<x){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    if(flag == 1){
        cout<<"At index "<<count+2<<" Element is";
        return " Found\n";
    }
    else{
        return "Not Found\n";
    }
    return 0;
}
int main(){
    int n,x;
    cin>>n>>x;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<BinarySearch(v,n,x);
    return 0;
}
