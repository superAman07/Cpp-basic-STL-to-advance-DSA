#include<bits/stdc++.h>
using namespace std;
void print_first_n(int &n){
    queue<string>q;
    q.push("5");
    q.push("6");
    for(int i=0;i<n;i++){
        string current=q.front();
        cout<<current<<" ";
        q.pop();
        q.push(current+"5");
        q.push(current+"6");
    }
}
int main(){
    int n;
    cin>>n;
    print_first_n(n);
    return 0;
}