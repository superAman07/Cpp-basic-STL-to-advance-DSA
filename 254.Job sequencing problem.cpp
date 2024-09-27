#include<iostream>
#include<numeric>
#include<algorithm>
#include<vector>
using namespace std;
struct job{
    int deadline,profit;
    job(int d,int p){
        deadline=d;
        profit=p;
    }
};
int JobSequencingProblem(job arr[],int n){
    sort(arr,arr+n,[](job p1,job p2){
        return p1.profit>p2.profit;
    });
    int maxDeadline = 0;
    for (int i = 0; i < n; i++) {
        maxDeadline = max(maxDeadline, arr[i].deadline);
    }
    vector<int> slots(maxDeadline, -1); 
    int totalProfit = 0; 
    for(int i=0;i<n;i++){ 
        for(int j=min(maxDeadline,arr[i].deadline)-1;j>=0;j--){
            if (slots[j]==-1){  
                slots[j]=i;  
                totalProfit +=arr[i].profit;  
                break;
            }
        }
    }
    return totalProfit;
}
int main(){
    int n=5;
    job arr[]{{4,50},{1,5},{1,20},{5,10},{5,80}};
    cout<<JobSequencingProblem(arr,n);
    return 0;
}
