#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class Solution{
    public:
        vector<int>prevSmaller(vector<int>&v){
        vector<int>res;
        stack<int>s;
        res.push_back(-1);
        s.push(v[0]);
        for(std::vector<int>::size_type i=1;i<v.size();i++){
            while(!s.empty()&&s.top()>=v[i]){
                s.pop();
            }
            int temp=s.empty()?-1:s.top();
            res.push_back(temp);
            s.push(v[i]);
        }
        return res;
    }
};
int main(){
    Solution sol;
    vector<int>v{15,10,18,12,4,6,2,8};//-1 -1 10 10 -1 4 -1 2
    vector<int>result=sol.prevSmaller(v);
    for(auto i:result){
        cout<<i<<" ";
    }
    return 0;
}
