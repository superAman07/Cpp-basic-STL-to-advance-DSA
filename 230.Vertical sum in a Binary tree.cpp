#include<iostream>
#include<map>
using namespace std;
struct node{
    int data;
    node* left,*right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
void vSumR(node*root,int hd,map<int,int>&m){
    if(root==NULL)return;
    vSumR(root->left,hd-1,m);
    m[hd]+=root->data;
    vSumR(root->right,hd+1,m);
}
void vSum(node*root){
    map<int,int>m;
    vSumR(root,0,m);
    for(auto &it:m){
        cout<<it.second<<" ";
    }
}
int main(){
    node* root=new node(10);
    root->left=new node(20);
    root->left->left=new node(5);
    root->left->right=new node(15);
    root->right=new node(30);
    vSum(root);
    return 0;
}
