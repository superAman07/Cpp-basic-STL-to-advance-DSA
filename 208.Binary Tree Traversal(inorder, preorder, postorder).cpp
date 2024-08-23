#include<iostream>
#include<stack>
using namespace std;
struct node{
    int key;
    node* left , *right;
    node(int k){
        key = k;
        left=right=NULL;
    }
};
//recursive inorder traversal
void inorder(node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
//iterative inorder traversal
void inorder_iterative(node *root){
    stack<node*> s;
    node* curr=root;
    while(curr!=NULL|| !s.empty()){
        while(curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->key<<" ";
        curr=curr->right;
    }
}
void preorder(node *root){
    if(root!=NULL){
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }
}
int main(){
    node* root = new node(10);
    root->left = new node(20);
    root->right=new node(30);
    root->left->left= new node(40);
    root->left->right= new node(50);
    root->right->right=new node(60);
    root->left->right->left= new node(70);
    root->left->right->right= new node(80);
    cout<<"Inorder Traversal: ";
    inorder(root);
    cout<<"\nPreoder Traversal: ";
    preorder(root);
    cout<<"\nPostoder Traversal: ";
    postorder(root);
    return 0;
}
