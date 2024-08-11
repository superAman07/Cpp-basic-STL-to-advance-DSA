#include<iostream>
#include<queue> 
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
void breadthFirstSearch(node* root){
    if(root==NULL)return;
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* curr=q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left!=NULL)q.push(curr->left);
        if(curr->right!=NULL)q.push(curr->right);
    }
}
int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right->right=new node(60);
    breadthFirstSearch(root);
    return 0;
}
