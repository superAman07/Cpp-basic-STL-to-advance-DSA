//efficient that before union ...in log(n)
#include<iostream>
#include<vector>
using namespace std;
vector<int>parent;
vector<int>ranks;
int find(int x){
    if(parent[x] == x){
        return x;
    }
    return find(parent[x]);
}
//union by Rank...
void Union(int x,int y){
    int rootX=find(x);
    int rootY=find(y);
    if(rootX!=rootY){
        if(ranks[rootX]<ranks[rootY])parent[rootX]=rootY;
        else if(ranks[rootX]>ranks[rootY])parent[rootY]=rootX;
        else{
            parent[rootY]=rootX;
            ranks[rootX]++;
        }
    }
}
int main(){
    int n=5;
    parent.resize(n);
    ranks.resize(n);
    for(int i=0;i<n;i++){
        parent[i]=i;
        ranks[i]=0;
    }
    Union(0,2);
    if(find(0)==find(2)){
        cout<<"0 and 2 are in the same set"<<endl;
    }else{
        cout<<"0 and 2 are not in the same set"<<endl;
    }
    return 0;
}
