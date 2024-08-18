#include<iostream>
#include<queue>
#include<vector>
using namespace std;
struct node{
    int data;
    node*left,*right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
int preIndex=0;
node* buildTree(vector<int>& in,vector<int> &pre,int start,int end){
    if(start>end)
        return NULL;
    node*root=new node(pre[preIndex++]);
    int inIndex;
    for(int i=start;i<=end;i++){
        if(root->data==in[i]){
            inIndex=i;
            break;
        }
    }
    root->left=buildTree(in,pre,start,inIndex-1);
    root->right=buildTree(in,pre,inIndex+1,end);
    return root;
}
void printTree(node *root){
    if(root==NULL)return;
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        node* curr=q.front();
        q.pop();
        if(curr==NULL){
            cout<<"\n";
            q.push(NULL);
            continue;
        }
        cout<<curr->data<<" ";
        if(curr->left!=NULL)q.push(curr->left);
        if(curr->right!=NULL)q.push(curr->right);
    }
}
int main(){
    vector<int> in{20,10,40,30,50};
    vector<int> pre{10,20,30,40,50};
    int start=0;
    int end=in.size()-1;
    node* root=buildTree(in,pre,start,end);
    printTree(root);
    return 0;
}
