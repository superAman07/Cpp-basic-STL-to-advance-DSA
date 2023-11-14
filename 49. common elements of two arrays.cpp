// // naive solution
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void commonElement(int a[],int b[],int n,int m){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(a[i]==b[j]){                  //O(n^2)
//                 cout<<a[i]<<" ";
//             }
//         }
//     }
// }
// int main(){
//     int a[]{10,15,20,25,30,50};
//     int b[]{30,5,15,80};
//     int n=sizeof(a)/sizeof(a[0]);
//     int m=sizeof(b)/sizeof(b[0]);
//     commonElement(a,b,n,m);
//     return 0;
// }

     // efficient solution

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void commonElements(int a[],int b[],int n,int m){
    unordered_set<int>s;
    for(int i=0;i<m;i++){
        s.insert(b[i]);
    }
    for(int i=0;i<n;i++){
        if(s.find(a[i])!=s.end()){
            cout<<a[i]<<" ";
        }
        else{
            continue;
        }
    }
}
int main(){
    int a[]{10,15,20,25,30,50};
    int b[]{30,5,15,80};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    commonElements(a,b,n,m);
    return 0;
}