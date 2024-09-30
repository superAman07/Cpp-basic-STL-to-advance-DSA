//Fibonacci number from TC e^n to linear (theta of n) using dynamic programming concept of memoizing...
//Memoization is basically top-down approach
#include<iostream>
using namespace std;
int memo[6]{-1,-1,-1,-1,-1,-1};
int fibonacci(int n){
    if(memo[n]==-1){
        int res;
        if(n==0||n==1)res=1;
        else{
            res = fibonacci(n-1)+fibonacci(n-2);
        }
        memo[n]=res;
    }
    return memo[n];
}
int main(){
    cout<<fibonacci(5)<<"\n";
    for(int i=0;i<6;i++){
        cout<<memo[i]<<" ";
    }
    return 0;
}
