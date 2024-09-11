#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void printMedian(vector<int>&arr){
    int n=arr.size();
    priority_queue<int>s;
    priority_queue<int,vector<int>,greater<int>>g;
    s.push(arr[0]);
    cout<<arr[0]<<"\n";
    for(int i=1;i<n;i++){
        int x=arr[i];
        if(s.size()>g.size()){
            if(s.top()>x){
                g.push(s.top());
                s.pop();
                s.push(x);
            }else{
                g.push(x);
            }
            cout<< (s.top()+g.top())/2.0<<"\n";
        }else{
            if(x<=s.top())s.push(x);
            else{
                g.push(x);
                s.push(g.top());
                g.pop();
            }
            cout<<s.top()<<"\n";
        }
    }
}
int main(){
    // vector<int>arr{20,10,30,7};
    vector<int>arr{25,7,10,15,20};
    printMedian(arr);
    return 0;
}
