//we can also do store inorder traversal of BST and store it in an array
//then we can use two pointer approach to find if array has a pair with given sum
//this will take theta(n) TC and theta(n) AS


//in O(n) time and space in worst case
#include<iostream>
#include<unordered_set>
using namespace std;
struct node{
    int data;
    node* left,*right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
bool isPairSum(node* root,int sum,unordered_set<int>s){
    if(root==NULL)return false;
    if(isPairSum(root->left,sum,s))return true;
    if(s.find(sum-root->data)!=s.end())return true;
    else s.insert(root->data);
    return isPairSum(root->right,sum,s);
}
int main(){
    node* root=new node(10);
    root->left=new node(8);
    root->left->left=new node(4);
    root->left->right=new node(9);
    root->right=new node(20);
    root->right->left=new node(11);
    root->right->right=new node(30);
    root->right->right->left=new node(25);
    unordered_set<int>s;
    int sum=33;
    cout<<boolalpha<<isPairSum(root,sum,s);
    return 0;
}
