#include<iostream>
using namespace std;
struct node{
    int data;
    node *left,*right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
node* ceilNode(node* root,int x){
    if(root==NULL)return NULL;
    node *res=NULL;
    while(root!=NULL){
        if(root->data==x)return root;
        else if(root->data<x){
            root=root->right;
        }else{
            res=root;
            root=root->left;
        }
    }
    return res;
}
int main(){
    node* root=new node(10);
    root->left=new node(5);
    root->right=new node(15);
    root->right->left=new node(12);
    root->right->right=new node(30);
    node* result=ceilNode(root,40);
    if(result!=NULL){
        cout<<result->data<<" ";
    }else{
        cout<<"Element is greater!";
    }
    return 0;
}
