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
// recursive solution in O(n) time and O(h) space
// node* insert(node* root,int x){
//     if(root==NULL)return new node(x);
//     else if(root->data<x)root->right=insert(root->right,x);
//     else if(root->data>x)root->left=insert(root->left,x);
//     return root;
// }

//iterative solution in O(n) time and O(1) space
node* insert(node* root,int x){
    node* temp = new node(x);
    node* parent=NULL , *curr=root;
    while(curr!=NULL){
        parent = curr;
        if(curr->data>x){
            curr=curr->left;
        }else if(curr->data<x){
            curr=curr->right;
        }else return root;
    }
    if(parent==NULL)return temp;
    if(parent->data>x)parent->left=temp;
    else parent->right=temp;
    return root;
}
void printLevelOrderLine(node* root){
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
    node* root=new node(10);
    root->left=new node(5);
    root->right=new node(15);
    root->right->left=new node(12);
    root->right->right=new node(18);
    node* head= insert(root,20);
    printLevelOrderLine(head);
    return 0;
}
