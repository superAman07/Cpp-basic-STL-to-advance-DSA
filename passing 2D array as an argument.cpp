#include<bits/stdc++.h>
using namespace std;
void fun(int mat[][2], int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<2;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int m=3;
    int mat[3][2] {{10,20},{20,30},{30,40}};
    fun(mat,m);
    return 0;
}