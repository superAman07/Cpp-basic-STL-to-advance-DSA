#include<iostream>
using namespace std;
struct node{
    int data;
    node *left,*right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
node* floorNode(node* root,int key){
    if(root==NULL)return NULL;
    node* curr=root;
    node* result= NULL;
    while(curr!=NULL){
        if(curr->data<key){
            result=curr;  // only update when go on right side
            curr=curr->right;
        }else if(curr->data>key){
            curr=curr->left;
        }else{
            return curr;
        }
    }
    return result;
}
int main(){
    node* root= new node(10);
    root->left=new node(5);
    root->right=new node(15);
    root->right->left=new node(12);
    root->right->right=new node(30);
    node* ans = floorNode(root,6);
    cout<<ans->data<<" ";
    return 0;
}
