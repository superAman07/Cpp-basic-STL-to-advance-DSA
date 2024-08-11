#include<iostream>
using namespace std;
struct node{
    int data;
    node* left,*right;
    node(int d){
        data=d;
        left=right=NULL;
    }
};
void PrintNodeAtKdist(node* root,int k){
    if(root==NULL)return;
    if(k==0){
     cout<<root->data<<" ";   
    }
    PrintNodeAtKdist(root->left,k-1);
    PrintNodeAtKdist(root->right,k-1);
}
int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right->right=new node(60);
    PrintNodeAtKdist(root,2);
    return 0;
}
