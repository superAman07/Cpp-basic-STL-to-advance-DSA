//Fibonacci number from TC e^n to linear (theta of n) using dynamic programming concept of memoizing...
//Memoization is basically top-down approach which is ezay to implement but not as efficient as tabulation
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

// Tabulation bottom up method (this is better approach almost) but difficult to implement


#include <bits/stdc++.h> 
using namespace std; // Function to multiply two 2x2 matrices 
void multiply(vector<vector<int>>& mat1, vector<vector<int>>& mat2) { // Perform matrix multiplication 
int x = mat1[0][0] * mat2[0][0] + mat1[0][1] * mat2[1][0]; int y = mat1[0][0] * mat2[0][1] + mat1[0][1] * mat2[1][1]; int z = mat1[1][0] * mat2[0][0] + mat1[1][1] * mat2[1][0]; int w = mat1[1][0] * mat2[0][1] + mat1[1][1] * mat2[1][1]; // Update matrix mat1 with the 
result mat1[0][0] = x; mat1[0][1] = y; mat1[1][0] = z; mat1[1][1] = w;
} // Function to perform matrix exponentiation 
void matrixPower(vector<vector<int>>& mat1, int n) { // Base case for recursion 
    if (n == 0 || n == 1) return; // Initialize a helper matrix 
    vector<vector<int>> mat2 = {{1, 1}, {1, 0}}; // Recursively calculate 
    mat1^(n/2) matrixPower(mat1, n / 2); // Square the matrix mat1 
    multiply(mat1, mat1); // If n is odd, multiply by the helper matrix mat2 
    if (n % 2 != 0) { 
        multiply(mat1, mat2); 
    }
} // Function to calculate the nth Fibonacci number // using matrix exponentiation 
int nthFibonacci(int n) { if (n <= 1) return n; // Initialize the transformation matrix 
    vector<vector<int>> mat1 = {{1, 1}, {1, 0}}; // Raise the matrix mat1 to the power of (n - 1) 
    matrixPower(mat1, n - 1); // The result is in the top-left cell of the matrix 
    return mat1[0][0];
}
int main() { 
    int n = 5; 
    int result = nthFibonacci(n); 
    cout << result << endl; 
    return 0; 
}
