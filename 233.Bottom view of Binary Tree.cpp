#include<iostream>
#include<map>
#include<queue>
using namespace std;
struct node{
    int data;
    node* left,*right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
void BottomViewOfTree(node* root){
    if(root==NULL)return;
    map<int,int>m;
    queue<pair<node*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        auto it=q.front();
        node* curr=it.first;
        int hd=it.second;
        m[hd]=curr->data;
        q.pop();
        if(curr->left)q.push({curr->left,hd-1});
        if(curr->right)q.push({curr->right,hd+1});
    }
    for(auto &it:m){
        cout<<it.second<<" ";
    }
}
int main(){
    node* root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right->left=new node(60);
    root->right->right=new node(70);
    BottomViewOfTree(root);
    return 0;
}
