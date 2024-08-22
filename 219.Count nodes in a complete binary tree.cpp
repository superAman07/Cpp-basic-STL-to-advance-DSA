// A tree is called a complete binary tree if it is completely filled except possibly the last level and the last level has to be filled from left to right
#include<iostream>
#include<cmath>
using namespace std;
struct node{
    int data;
    node*left,*right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
int countNodes(node *root){
    node* curr=root;
    int lh=0,rh=0;
    while(curr!=NULL){
        lh++;
        curr=curr->left;
    }
    curr=root;
    while(curr!=NULL){
        rh++;
        curr=curr->right;
    }
    if(lh==rh)return pow(2,lh)-1;
    return 1+countNodes(root->left)+countNodes(root->right);
}
int main(){
    node* root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->left=new node(60);
    root->right->right=new node(70);
    root->left->left->left = new node(80);
    root->left->left->right = new node(90);
    root->left->right->left = new node(100);
    cout<<countNodes(root);
    return 0;
}
