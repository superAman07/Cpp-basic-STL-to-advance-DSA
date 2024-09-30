#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=10;
    int &y=x;                // this emphorsent is for reference declaration
    cout<<&y<<"\n";          // this emphorsant is for address
    cout<<y<<"\n";
    return 0;
}