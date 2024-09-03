#include<iostream>
using namespace std;

struct node {
    int data;
    node* left, *right;
    node(int x) {
        data = x;
        left = right = NULL;
    }
};

node* previousNode = NULL, *first = NULL, *second = NULL;

void correctBST(node* root) { 
    if (root == NULL) return;

    // Traverse the left subtree
    correctBST(root->left);

    // Check if the current node is out of order
    if (previousNode != NULL && root->data < previousNode->data) {
        if (first == NULL) {
            first = previousNode;  // First wrong node
        }
        second = root;    // Second wrong node
    }
    previousNode = root;

    // Traverse the right subtree
    correctBST(root->right);
}

void inorder(node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    node* root = new node(20);
    root->left = new node(60);
    root->right = new node(80);
    root->left->left = new node(4);
    root->left->right = new node(10);
    root->right->left = new node(70);
    root->right->right = new node(100);

    cout << "Inorder traversal before correction: ";
    inorder(root);
    cout << endl;

    // Correct the BST
    correctBST(root);

    // Swap the values of the first and second nodes to correct the tree
    if (first && second) {
        int temp = first->data;
        first->data = second->data;
        second->data = temp;
    }

    cout << "Inorder traversal after correction: ";
    inorder(root);
    cout << endl;

    return 0;
}
