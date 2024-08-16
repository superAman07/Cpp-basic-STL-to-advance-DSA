#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left, *right;
    node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
//efficient solution 
int isBalanced(node* root){
    if(root==NULL)return 0;
    int lh=isBalanced(root->left);
    if(lh==-1)return -1;
    int rh=isBalanced(root->right);
    if(rh==-1)return -1;
    if(abs(lh-rh)>1)return -1;
    else return max(lh,rh)+1;
}
int main(){
    // node* root=new node(8);
    // root->left=new node(10);
    // root->right=new node(15);
    // root->left->left=new node(13);
    // root->left->right=new node(14); 
    // root->right->right=new node(16); 
    // root->right->right->right=new node(17);
    node *root = new node(20);
    root->left = new node(8);
    root->right = new node(12);
    root->left->left = new node(3);
    root->left->right = new node(5);
    cout<<isBalanced(root);
    return 0;
}
