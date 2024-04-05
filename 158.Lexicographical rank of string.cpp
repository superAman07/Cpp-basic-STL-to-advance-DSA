#include<iostream>
using namespace std;
const int CHAR =256;
int fact(int n){
    if(n==0)return 1;
    return n*fact(n-1);
}
int LexRank(string &str){
    int res=1;
    int n=str.length();
    int mul = fact(n);
    int count[CHAR]={0};
    for(int i=0;i<n;i++)
        count[str[i]]++;
    for(int i=1;i<CHAR;i++)
        count[i]+=count[i-1];
    for(int i=0;i<n-1;i++){
        mul/=(n-i);
        res+=count[str[i]-1]*mul;
        for(int j=str[i];j<CHAR;j++){
            count[j]--;
        }
    }
    return res;
}
int main(){
    // string str="BAC";//output 3
    string str="STRING";//598
    cout<<LexRank(str);
    return 0;
}
