#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
using namespace std;
int largestRectangularHistogram(vector<int>&v){
    stack<int>s;
    int res=0;
    for(int i=0;i<static_cast<int>(v.size());i++){
        while(!s.empty()&&v[s.top()]>=v[i]){
            int h=v[s.top()];
            s.pop();
            int w=s.empty()?i:i-s.top()-1;
            res=max(res,h*w);
        }
        s.push(i);
    } 
    while(!s.empty()){
        int h=v[s.top()];
        s.pop();
        int w=s.empty()?v.size():v.size()-s.top()-1;
        res=max(res,h*w);
    }
    return res;
}
int main(){
    vector<int>v{6,2,5,4,1,5,6};
    cout<<largestRectangularHistogram(v);
    return 0;
}
