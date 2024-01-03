//naive solution

// #include<iostream>
// using namespace std;
// int countSet(int n){
//     int res=0;
//     while(n>0){
//         if(n%2!=0){
//             res++;
//         }
//         n/=2;
//     }
//     return res;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<countSet(n);
//     return 0;
// }

// Brian Kerningam's Algorithm
// O(set bit count)
#include<bits/stdc++.h>
using namespace std;
int countBits(int n){
    int res=0;
    while(n>0){
        n=(n&(n-1));
        res++;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    cout<<countBits(n);
    return 0;
}

// best solution

#include<bits/stdc++.h>
using namespace std;
int table[256];
void initialize(){
    table[0]=0;
    for(int i=1;i<256;i++){
        table[i]=(i&1)+table[i/2];
    }
}
int countSet(int n){
    int res= table(n& 0xff);
    n=n>>8;
    int res= table(n& 0xff);
    n=n>>8;
    int res= table(n& 0xff);
    n=n>>8;
    int res= table(n& 0xff);
    n=n>>8;
    return res;
}
int main(){
    int n;
    cin>>n;
    cout<<countSet(n);
    return 0;
}
