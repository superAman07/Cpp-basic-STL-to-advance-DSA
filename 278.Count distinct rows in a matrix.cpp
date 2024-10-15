#include<iostream>
using namespace std;
int m = 4, n = 4;
bool mat[4][4] = {
    {1, 0, 0, 1},
    {1, 0, 0, 1},
    {1, 1, 1, 0},
    {0, 0, 0, 1}
};
struct TrieNode {
    TrieNode* child[2];
    TrieNode() {
        child[0] = NULL;
        child[1] = NULL;
    }
};
bool CountRow(TrieNode* root, int row) {
    TrieNode* curr = root;
    bool isNewRow = false;
    for (int i = 0; i < n; i++) {
        int index = mat[row][i];
        if (curr->child[index] == NULL) {
            curr->child[index] = new TrieNode();
            isNewRow = true;
        }
        curr = curr->child[index];
    }
    return isNewRow;
}
int countDist() {
    TrieNode* root = new TrieNode();
    int res = 0;
    for (int row = 0; row < m; row++) {
        if (CountRow(root, row)) {
            res++;
        }
    }
    return res;
}
int main() {
    cout << "Number of distinct rows: " << countDist() << endl;
    return 0;
}
