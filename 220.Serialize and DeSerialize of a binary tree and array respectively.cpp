#include<iostream>
#include<vector>
using namespace std;
struct node{
    int data;
    node* left,*right;
    node(int c){
        data=c;
        left=right=NULL;
    }
};
//for serialize the given binary tree
void serialize(node* root,vector<int>&serial){
    if(root==NULL){
        serial.push_back(-1);
        return;
    }
    serial.push_back(root->data);
    serialize(root->left,serial);
    serialize(root->right,serial);
}
// deserialize the give array to the binary tree
int index=0; 
node* deserialize(vector<int>&serial){
    if(index==serial.size())return NULL;
    int value=serial[index++];
    if(value==-1)return NULL;
    node* root=new node(value);
    root->left=deserialize(serial);
    root->right=deserialize(serial);
    return root;
}
void printPreorder(node* root){
    if(root==NULL)return;
    cout<<root->data<<' ';
    printPreorder(root->left);
    printPreorder(root->right);
}
int main(){
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    vector<int>serial;
    serialize(root,serial);
    cout<<"Serialize list: ";
    for(int i=0;i<serial.size();i++){
        cout<<serial[i]<<" ";
    }
    cout<<"\n";
    cout<<"Deserialized list: ";
    node* root1=deserialize(serial);
    printPreorder(root);
    return 0;
}
