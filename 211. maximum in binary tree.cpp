#include<iostream>
using namespace std;
struct node{
    int data;
    node *left,*right;
    node(int c){
        data=c;
        left=right=NULL;
    }
};
int maximumInBinary(node*root){
    if(root==NULL)return INT_MIN;
    return max(root->data,max(maximumInBinary(root->left),maximumInBinary(root->right)));
}
int main(){
    node *root=new node(40);
    root->left=new node(70);
    root->right=new node(30);
    root->left->left=new node(90);
    root->left->right=new node(12);
    root->right->left=new node(45);
    root->right->right=new node(79);
    cout<<maximumInBinary(root);
    return 0; 
}
