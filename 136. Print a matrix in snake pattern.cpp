#include<iostream>
#include<vector>
using namespace std;
void snakePattern(vector<vector<int>>&v,int n){
     for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<v[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<v[i][j]<<" ";
            }
        }
     }
}
int main(){
    vector<vector<int>>v{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n=4;
    snakePattern(v,n);
    return 0;
}
