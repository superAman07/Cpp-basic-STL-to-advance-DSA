//intersection of two arrays

#include<iostream>
#include<unordered_set>
using namespace std;
int intersection(int a[],int b[],int m,int n){
    unordered_set<int>s;
    for(int i=0;i<m;i++){
        s.insert(a[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(s.find(b[i])!=s.end()){
            count++;
            s.erase(b[i]);
        }
    }
    return count;
}
int main(){
    int a[]{10,15,20,15,30,30,5};
    int b[]{30,5,30,80};
    int m= sizeof(a)/sizeof(a[0]);
    int n= sizeof(b)/sizeof(b[0]);
    cout<<intersection(a,b,m,n);
    return 0;
}
// union of two array

#include<iostream>
#include<unordered_set>
using namespace std;
unordered_set<int>s;
int Union(int a[],int b[],int m,int n){
    for(int i=0;i<max(m,n);i++){
        s.insert(a[i]);
        s.insert(b[i]);
    }
    return s.size();
}
int main(){
    int a[]{1,12,15,10};
    int b[]{12,13,14,15};
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    cout<<"The merged array is: "<<Union(a,b,m,n);
    for(auto &i:s){
        cout<<i<<" ";
    }
    return 0;
}
