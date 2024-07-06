//In O(n) time and space;
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
    vector<int>nextSmaller(vector<int>&v){
        stack<int>s;
        vector<int>res;
        res.push_back(-1);
        s.push(v[v.size()-1]);
        for(int i=v.size()-2;i>=0;i--){
            while(!s.empty() && v[i]<=s.top()){
                s.pop();
            }
            int temp=s.empty()?-1:s.top();
            res.push_back(temp);
            s.push(v[i]);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
int main(){
    Solution sol;
    vector<int>v{15,10,18,12,4,6,2,8};
    vector<int>result=sol.nextSmaller(v);
    for(auto &i:result){
        cout<<i<<" ";
    }
    return 0;
}
