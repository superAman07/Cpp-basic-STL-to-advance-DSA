// recursive solution which is not good for large tree...which is based on DFS

// #include<iostream>
// #include<map>
// #include<vector>
// using namespace std;
// struct node{
//     int data;
//     node* left,*right;
//     node(int x){
//         data=x;
//         left=right=NULL;
//     }
// };
// void vTraversalR(node*root,int hd,map<int,vector<int>>&m){
//     if(root==NULL)return;
//     vTraversalR(root->left,hd-1,m);
//     m[hd].push_back(root->data);
//     vTraversalR(root->right,hd+1,m);
// }
// void vTraversal(node*root){
//     map<int,vector<int>>m;
//     vTraversalR(root,0,m);
//     for(auto &it:m){ 
//         for(int i:it.second){
//             cout<<i<<" ";
//         }
//         cout<<"\n";
//     }
// }
// int main(){
//     // node* root=new node(10);
//     // root->left=new node(20);
//     // root->right=new node(30);
//     // root->right->left=new node(40);
//     // root->right->right=new node(50);
//     node* root=new node(1);
//     root->left=new node(2);
//     root->right=new node(3);
//     root->left->left=new node(4);
//     root->left->right=new node(5);
//     root->right->left=new node(6);
//     root->right->right=new node(7);
//     root->right->right->left=new node(8);
//     root->right->right->left->left=new node(9);
//     vTraversal(root);
//     return 0;
// }

//based on Breadth-First Search (BFS) it's good and efficient for large tree...
#include<iostream>
#include<map>
#include<queue>
#include<vector>
using namespace std;
struct node{
    int data;
    node* left,*right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
void vTraversal(node* root){
    map<int,vector<int>>m;
    queue<pair<node*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        auto p=q.front();
        node* curr=p.first;
        int hd=p.second;
        m[hd].push_back(curr->data);
        q.pop();
        if(curr->left)q.push({curr->left,hd-1});
        if(curr->right)q.push({curr->right,hd+1});
    }
    for(auto &it:m){
        for(int &i:it.second){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    // node* root=new node(10);
    // root->left=new node(20);
    // root->right=new node(30);
    // root->right->left=new node(40);
    // root->right->right=new node(50);
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    root->right->right->left=new node(8);
    root->right->right->left->left=new node(9);
    vTraversal(root);
    return 0;
}
