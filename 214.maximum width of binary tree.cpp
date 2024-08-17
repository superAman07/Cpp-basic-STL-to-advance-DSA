#include<iostream>
#include<queue>
using namespace std;
struct node{
    int data;
    node *left,*right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
int MaxWidthBinaryTree(node *root){
    if(root==NULL)return 0;
    queue<node*>q;
    q.push(root);
    int maximum=0;
    while(!q.empty()){
        int count=q.size();
        maximum=max(maximum,count);
        for(int i=0;i<count;i++){
            node* curr=q.front();
            q.pop(); 
            if(curr->left!=NULL)q.push(curr->left);
            if(curr->right!=NULL)q.push(curr->right);
        }
    }
    return maximum;
}
int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right->right=new node(70);
    cout<<MaxWidthBinaryTree(root);
    return 0;
}
