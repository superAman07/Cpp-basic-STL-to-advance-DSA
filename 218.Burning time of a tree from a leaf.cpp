#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
int res=0;
int burnTime(node*root,int leaf,int &dist){
    if(root==NULL)return 0;
    if(root->data==leaf){
        dist=0;
        return 1;
    }
    int ldist=-1,rdist=-1;
    int lh=burnTime(root->left,leaf,ldist);
    int rh=burnTime(root->right,leaf,rdist);
    if(ldist!=-1){
        dist=ldist+1;
        res=max(res,dist+rh);
    }else if(rdist!=-1){
        dist=rdist+1;
        res=max(res,dist+lh);
    }
    return max(lh,rh)+1;
}
int main(){
    node* root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->left->left->left=new node(60);
    root->left->left->left->left=new node(70);
    int dist=0;
    cout<<burnTime(root,70,dist)-1;
    return 0;
}
