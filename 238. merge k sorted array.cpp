#include<iostream>
#include<vector>
#include<queue>
using namespace std;

struct triplet{
    int val,apos,vpos;
    triplet(int v,int ap,int vp){
        val=v;
        apos=ap;
        vpos=vp;
    }
};
struct myCmp{
    bool operator()(triplet &t1,triplet &t2){
        return t1.val>t2.val;
    }
};

vector<int>mergeArray(vector<vector<int>>&arr){
    vector<int>res;
    priority_queue<triplet,vector<triplet>,myCmp>pq;
    for(int i=0;i<arr.size();i++){
        triplet t(arr[i][0],i,0);
        pq.push(t);
    }
    while(!pq.empty()){
        triplet curr= pq.top();pq.pop();
        res.push_back(curr.val);
        int ap= curr.apos,vp=curr.vpos;
        if(vp+1<arr[ap].size()){
            triplet t(arr[ap][vp+1],ap,vp+1);
            pq.push(t);
        }
    }
    return res;
}

int main(){
    vector<vector<int>>v{{5,10},{4,9},{6}};
    vector<int>res=mergeArray(v);
    for(auto &it:res){
        cout<<it<<" ";
    }
    return 0;
}
