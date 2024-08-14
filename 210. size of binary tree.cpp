#include<iostream>
using namespace std;
using namespace std;
struct node{
    int data;
    node* left,*right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
int size(node *root){
    if(root==NULL)return 0;
    return 1+size(root->left)+size(root->right);
}
int main(){
    // node *root=new node(10);
    // root->left=new node(20);
    // root->right=new node(30);
    // root->left->left=new node(40);
    // root->left->right=new node(50);
    // root->right->right=new node(60);
    node *root=new node(10);
    root->left=new node(80);
    root->right=new node(70);
    root->left->left=new node(30);
    root->left->right=new node(40);
    cout<<size(root);
    return 0;
}
