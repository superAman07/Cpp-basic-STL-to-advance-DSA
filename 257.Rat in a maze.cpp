#include<iostream>
using namespace std;

const int n=3;
bool maze[n][n]={{1,0,1},{1,1,0},{0,1,1}};
bool sol[n][n];
bool isSafe(int i,int j){
    return (i<n && j<n && maze[i][j]==1);
}
bool solveMazeRec(int i,int j){
    if(i==n-1 && j==n-1){
        sol[i][j]=true;
        return true;
    }
    if(isSafe(i,j)==true){
        sol[i][j]=1;
        if(solveMazeRec(i+1,j)==true)return true;
        else if(solveMazeRec(i,j+1)==true)return true;
        sol[i][j]=0;
    }
    return false;
}
bool solveMaze(){
    if(solveMazeRec(0,0)==false)return false;
    else {
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<sol[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return true;
}
int main(){
    cout<<"Maze is solvable: \n"<<solveMaze()<<endl;
    return 0;
}
