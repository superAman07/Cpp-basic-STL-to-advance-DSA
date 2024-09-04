//based on Breadth-First Search (BFS) it's good and efficient for large tree...
#include<iostream>
#include<map>
#include<queue>
#include<vector>
using namespace std;
struct node{
    int data;
    node* left,*right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
void vTopView(node* root){
    map<int,int>m;
    queue<pair<node*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        auto p=q.front();
        node* curr=p.first;
        int hd=p.second;
        q.pop();
        if(m.find(hd)==m.end()){
            m[hd]=(curr->data);
        }
        if(curr->left)q.push({curr->left,hd-1});
        if(curr->right)q.push({curr->right,hd+1});
    }
    for(auto &it:m){ 
        cout<<it.second<<" ";
    }
}
int main(){
    // node* root=new node(10);
    // root->left=new node(20);
    // root->right=new node(30);
    // root->right->left=new node(40);
    // root->right->right=new node(50);
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    root->right->right->left=new node(8);
    root->right->right->left->left=new node(9);
    vTopView(root);
    return 0;
}
