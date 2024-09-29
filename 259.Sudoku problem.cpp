// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int N=4;
// int grid[4][4]={{1,0,3,0},{0,0,2,1},{0,1,0,2},{2,4,0,0}};
// bool isSafe(int i,int j,int n){
//     for(int k=0;k<N;k++){
//         if(grid[i][k]==n||grid[k][j]==n){
//             return false;
//         }
//     }
//     int s=sqrt(N);
//     int rs=i-i%s;
//     int cs=j-j%s;
//     for(int i=0;i<s;i++){
//         for(int j=0;j<s;j++){
//             if(grid[i+rs][j+cs]==n)return false;
//         }
//     }
//     return true;
// }
// bool solve(){
//     int i,j;
//     for(int i=0;i<N;i++){
//         for(int j=0;j<N;j++){
//             if(grid[i][j]==0)break;
//         }
//     }
//     if(i==N&&j==N)return true;
//     for(int n=1;n<=N;n++){
//         if(isSafe(i,j,n)){
//             grid[i][j]=n;
//             if(solve())return true;
//             grid[i][j]=0;  //there is back tracking...
//         }
//     }
//     return false;
// }
// int main(){
//     if(solve()){
//         for(int i=0;i<N;i++){
//             for(int j=0;j<N;j++) {
//                 cout<<grid[i][j]<<" ";
//             }
//             cout<<"\n";
//         }
//     }else{
//         cout<<"No solution exists\n";
//     }
//     return 0;
// }


#include<iostream>
#include<cmath> 
using namespace std;

int N = 4;
int grid[4][4] = {
    {1, 0, 3, 0},
    {0, 0, 2, 1},
    {0, 1, 0, 2},
    {2, 4, 0, 0}
};

// Function to check if placing 'n' at grid[i][j] is safe
bool isSafe(int i, int j, int n) {
    // Check row and column
    for (int k = 0; k < N; k++) {
        if (grid[i][k] == n || grid[k][j] == n) {
            return false;
        }
    }

    // Check subgrid
    int s = sqrt(N); // Subgrid size
    int rs = i - i % s; // Starting row of subgrid
    int cs = j - j % s; // Starting column of subgrid

    for (int x = 0; x < s; x++) {
        for (int y = 0; y < s; y++) {
            if (grid[x + rs][y + cs] == n) {
                return false;
            }
        }
    }

    return true;
}

// Function to find an empty cell in the grid
bool findEmptyCell(int &i, int &j) {
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (grid[i][j] == 0) {
                return true;
            }
        }
    }
    return false;
}

// Recursive function to solve the grid (Sudoku-like problem)
bool solve() {
    int i, j;
    if (!findEmptyCell(i, j)) {
        return true; // If no empty cell, solution is found
    }

    for (int n = 1; n <= N; n++) {
        if (isSafe(i, j, n)) {
            grid[i][j] = n; // Place the number

            if (solve()) {
                return true; // Recursive call to continue solving
            }

            grid[i][j] = 0; // Backtrack
        }
    }
    return false; // Trigger backtracking
}

int main() {
    if (solve()) {
        // Print the solution
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution exists!" << endl;
    }

    return 0;
}
