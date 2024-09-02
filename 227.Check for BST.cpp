#include<iostream>
using namespace std;
struct node{
    int data;
    node* left,*right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
//both are efficient
bool isBST(node* root,int min,int max){
    if(root==NULL)return true;
    return (root->data>min&&root->data<max &&isBST(root->left,min,root->data)&& isBST(root->right,root->data,max));
}
// int prev=INT_MIN;
// bool isBST1(node* root){
//     if(root==NULL)return true;
//     if(isBST1(root->left)==false)return false;
//     if(root->data<=prev)return false;
//     prev=root->data;
//     return isBST1(root->right);
// } 
int main(){
    // node* root=new node(20);
    // root->left=new node(8);
    // root->right=new node(30);
    // root->right->left=new node(18);
    // root->right->right=new node(35);
    node* root = new node(80);
    root->left = new node(70);
    root->left->left = new node(60);
    root->left->right = new node(75);
    root->right = new node(90);
    root->right->left = new node(85);
    root->right->right = new node(100);
    int min=INT_MIN;
    int max=INT_MAX;
    cout<<boolalpha<<isBST(root,min,max);
    // cout<<boolalpha<<isBST1(root);
    return 0;
}
