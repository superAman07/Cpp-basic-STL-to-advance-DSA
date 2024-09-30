#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cout<<"Enter the no. n: "<<"\n";
   cin>>n;
   vector<vector<int>>mat1(n,vector<int>(n,0));
   vector<vector<int>>mat2(n,vector<int>(n,0));
   vector<vector<int>>res(n,vector<int>(n,0));
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           int a;
           cin>>a;
           mat1[i][j]=a;
       }
   }
   for(int j=0;j<n;j++){
       for(int k=0;k<n;k++){
           int a;
           cin>>a;
           mat2[j][k]=a;
       }
   }
   for(int i=0;i<n;i++){
       for(int k=0;k<n;k++){
           res[i][k]=0;
           for(int j=0;j<n;j++){
               res[i][k]=res[i][k]+(mat1[i][j]*mat2[j][k]);
           }
       }
   }
   cout<<"\n The product of the matrix\n";
   for(int i=0;i<n;i++){
       for(int k=0;k<n;k++){
           cout<<res[i][k]<<" ";
       }
       cout<<"\n";
   }
   return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,a[3][3],b[3][3],c[3][3];
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>a[i][j];
//         }
//     }
//     for(int j=0;j<n;j++){
//         for(int k=0;k<n;k++){
//             cin>>b[j][k];
//         }
//     } 
//     for(int i=0;i<n;i++){
//         for(int k=0;k<n;k++){
//             c[i][k]=0;
//             for(int j=0;j<n;j++){
//                 c[i][k]=c[i][k]+(a[i][j]*b[j][k]);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<c[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }