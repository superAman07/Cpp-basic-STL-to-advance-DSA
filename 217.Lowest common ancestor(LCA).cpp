//naive solution
#include<iostream>
#include<vector>
using namespace std;
struct node{
    int data;
    node* left,*right;
    node(int d){
        data=d;
        left=right=NULL;
    }
};
bool findPath(node* root,vector<node*>v,int n){
    if(root==NULL)return NULL;
    v.push_back(root);
    if(root->data==n)return true;
    if((root->left &&findPath(root->left,v,n))||(root->right&&findPath(root->right,v,n)))return true;
    v.pop_back();
    return false;
}
node* lca(node* root,int n1,int n2){
    vector<node*>v1,v2;
    if(!findPath(root,v1,n1)||!findPath(root,v2,n2))return NULL;
    for(int i=0;i<v1.size()-1 && i<v2.size()-1;i++){
        if(v2[i+1]!=v1[i+1])return v1[i];
    }
    return NULL;
}
int main(){
    node* root=new node(10);
    root->left=new node(50);
    root->right=new node(60);
    root->left->left=new node(70);
    root->left->left->left=new node(40);
    root->left->right=new node(20);
    root->left->right->right=new node(80);
    root->left->right->left=new node(90);
    root->left->right->left->left=new node(30);
    int n1=30;
    int n2=80;
    node* ans=lca(root,n1,n2);
    cout<<ans->data<<endl;
    return 0;
}
