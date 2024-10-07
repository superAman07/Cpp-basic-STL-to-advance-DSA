#include<iostream>
#include<unordered_map>
using namespace std;
int Zero1Knapsack(int value[],int weight[],int W,int n){
    if(n==0||W==0){
        return 0;
    }
    if(weight[n-1]>=W){
        return Zero1Knapsack(value,weight,W,n-1);
    }else{
        return max(value[n-1]+Zero1Knapsack(value,weight,W-weight[n-1],n-1),Zero1Knapsack(value,weight,W,n-1));
    }
}
int main(){
    int value[]{10,40,30,50};
    int weight[]{5,4,6,3};
    int W=10;
    int n = sizeof(value)/sizeof(value[0]);
    cout<<Zero1Knapsack(value,weight,W,n)<<endl;
    return 0;
}
