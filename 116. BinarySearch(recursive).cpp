#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int cnt = 0;
string BinarySearchRecursive(vector<int>&v,int low,int high,int x){
  int mid = (low + high)/2;
  if(v[mid]==x){
    cout<<"At index "<<cnt;
    return " Found\n";
  }
  else if(v[mid]<x){
    BinarySearchRecursive(vector<int>&v, mid+1,high,x);
  }
  else{
    BinarySearchRecursive(vector<int>&v,high,mid-1,x);
  }
  return " Not Found";
}
int main(){
  int n,x;
  cin>>n>>x;
  vector<int>v;
  int low = 0;
  int high = n-1;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    v.push_back(a);
  }
  cout<<BinarySearchRecursive(v,low,high,x);
  return 0;
}
