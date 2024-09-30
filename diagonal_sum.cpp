#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 3;
    int sum1=0;
    int a[n][n] {{1,2,3},
                 {4,5,6},
                 {7,8,9}};
    for(int i=0;i<n;i++){
        sum1+=a[i][i]+a[i][n-1-i];
    }
    if(n%2!=0){
        sum1-=a[n/2][n/2];
    }
    cout<<sum1;
    return 0;
}