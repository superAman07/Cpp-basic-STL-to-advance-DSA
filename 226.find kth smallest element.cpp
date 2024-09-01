// //Naive solution in O(n)
// #include<iostream>
// using namespace std;
// struct node{
//     int data;
//     node* left,*right;
//     node(int x){
//         data=x;
//         left=right=NULL;
//     }
// };
// int count =0;
// void printKth(node* root,int k){
//     if(root!=NULL){
//         printKth(root->left,k);
//         count++;
//         if(count==k){
//             cout<<root->data<<"\n"; 
//             return;    // due to this return it become O(h+k) which is efficient than O(n)
//         }
//         printKth(root->right,k);
//     }
// }
// int main(){
//     node* root=new node(50);
//     root->left=new node(20);
//     root->left->left=new node(10);
//     root->left->right=new node(40);
//     root->right=new node(100);
//     root->right->left=new node(70);
//     root->right->left->left=new node(60);
//     root->right->right=new node(120);
//     printKth(root,6);
//     return 0;
// }

// efficient solution in O(h)

#include<iostream>
using namespace std;
struct node{
    int data;
    node* left,*right;
    int lcount;
    node(int x){
        data=x;
        left=right=NULL;
        lcount=0;
    }
};
node *insert(node* root, int x){
    if(root==NULL)return new node(x);
    if(x<root->data){
        root->left = insert(root->left, x);
        root->lcount++;
    }else {
        root->right = insert(root->right, x);
    }
    return root;
}
int kthElement(node*root,int k){
    if(root==NULL)return -1;
    if((root->lcount+1)==k)return root->data;
    else if((root->lcount+1)>k) return kthElement(root->left,k);
    else return kthElement(root->right,(k-root->lcount-1));
}
int main(){
    // node* root=new node(50);
    // root->left=new node(20);
    // root->left->left=new node(10);
    // root->left->right=new node(40);
    // root->right=new node(100);
    // root->right->left=new node(70);
    // root->right->left->left=new node(60);
    // root->right->right=new node(120);
    // cout<<kthElement(root,3);
    node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 20);
    root = insert(root, 10);
    root = insert(root, 40);
    root = insert(root, 100);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 120);

    cout << kthElement(root, 3) << endl;  // Should return the 3rd smallest element
    return 0;
}
