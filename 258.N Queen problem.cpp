#include<iostream>
using namespace std;
int n=4;
bool board[4][4]={0};
bool isSafe(int row,int col){
    for(int i=0;i<col;i++){
        if(board[row][i])return false;
    }
    for(int i=row,j=col;i>=0&&j>=0;i--,j--){
        if(board[i][j])return false;
    }
    for(int i=row,j=col;j>=0 && i<n;i++,j--){
        if(board[i][j])return false;
    }
    return true;
}
bool solveRec(int col){
    if(col==n)return true;
    for(int i=0;i<n;i++){
        if(isSafe(i,col)){
            board[i][col]=true;
            if(solveRec(col+1))return true;
            board[i][col]=0;
        }
    }
    return false;
}
bool solve(){
    if(solveRec(0)==false)return false;
    else return true;
}
int main(){ 
    if(solve)cout<<"True";
    return 0;
}
