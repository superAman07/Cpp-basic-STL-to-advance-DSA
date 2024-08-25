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
//Recursive solution in O(h) time and O(h) space
// bool SearchRecursive(node* root,int x){
//     if(root==NULL)return false;
//     else if(root->data==x)return true;
//     else if(root->data<x) return Search(root->right,x);
//     else return Search(root->left,x);
// }
// Iterative solution in O(h) time and O(1) space
bool SearchIterative(node* root,int x){
    if(root==NULL)return false;
    while(root!=NULL){
        if(root->data==x)return true;
        else if(root->data>x)root=root->left;
        else root=root->right;
    }
    return false;
}
int main(){
    node* root = new node(15);
    root->left = new node(5);
    root->right = new node(20);
    root->left->left = new node(3);
    root->right->left = new node(18);
    root->right->right = new node(80);
    root->right->left->left=new node(16);
    // cout<<std::boolalpha<<SearchRecursive(root,16)<<" ";
    cout<<std::boolalpha<<SearchIterative(root,16)<<" ";
    return 0;
}
