#include<iostream>
using namespace std;
struct node{
    int data;
    node* left,*right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};
node* BTToDLL(node* root, node*&prev){
    if(root==NULL)return root;
    node* head=BTToDLL(root->left,prev);
    if(prev==NULL)head=root;
    else{
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    BTToDLL(root->right,prev);
    return head;
}
void printDLL(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->right;
    }
}
int main(){
    node* root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    node *prev=NULL;
    node* head=BTToDLL(root,prev);
    printDLL(head);
    return 0;
}
