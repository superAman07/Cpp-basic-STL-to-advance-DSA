//In O(h) time and O(h) space
#include<iostream>
#include<queue>
using namespace std;
struct node{
    int data;
    node* left,*right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
node* getSuccessor(node* curr){
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL)curr=curr->left;
    return curr;
}
node* delNode(node* root, int x){
    if(root==NULL)return root;
    if(root->data<x){
        root->right=delNode(root->right,x);
    }else if(root->data>x){
        root->left=delNode(root->left,x);
    }else{
        if(root->left==NULL){
            node* temp = root->right;
            delete(root);
            return temp;
        }else if(root->right==NULL){
            node* temp=root->left;
            delete root;
            return temp;
        }else{
            node* succ=getSuccessor(root);
            root->data=succ->data;
            root->right=delNode(root->right,succ->data);
        }
    }
    return root;
}
void printTreeLevelOrder(node* root){
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
    node* root=new node(50);
    root->left=new node(30);
    root->left->left=new node(20);
    root->left->right=new node(40);
    root->right=new node(70);
    root->right->left=new node(60);
    root->right->right=new node(80);
    cout<<"Before deletion: ";
    printTreeLevelOrder(root);
    node* finalNode=delNode(root,70);
    cout<<"\nAfter deletion: ";
    printTreeLevelOrder(finalNode);
    return 0;
}
