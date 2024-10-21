//in worst case TC is O(n) for both find and union fx...
#include<iostream>
#include<vector>
using namespace std;
vector<int>parent;
int find(int x){
    if(parent[x] == x){
        return x;
    }
    return find(parent[x]);
}
void Union(int x,int y){
    int rootX=find(x);
    int rootY=find(y);
    if(rootX!=rootY){
        parent[rootY]=rootX;
    }else return;
}
int main(){
    int n=5;
    parent.resize(n);
    for(int i=0;i<n;i++){
        parent[i]=i;
    }
    Union(0,2);
    if(s.find(0)==s.find(2)){
        cout<<"0 and 2 are in the same set"<<endl;
    }else{
        cout<<"0 and 2 are not in the same set"<<endl;
    }
    return 0;
}
