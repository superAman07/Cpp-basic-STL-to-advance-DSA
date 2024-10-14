#include<iostream>
using namespace std;
struct TrieNode{
    TrieNode *child[26];
    bool isEnd;
    TrieNode(){
        isEnd=false;
        for(int i=0;i<26;i++){
            child[i]=NULL;
        }
    }
};
// O(N) where n is the key length
TrieNode *root;
bool search(string &key){
    TrieNode *curr=root;
    for(int i=0;i<key.length();i++){
        int index=key[i]-'a';
        if(curr->child[index]==NULL)return false;
        curr=curr->child[index];
    }
    return curr->isEnd;
}
// Theta(n) 
void insert(string &key){
    TrieNode *curr=root;
    for(int i=0;i<key.length();i++){
        int index=key[i]-'a';
        if(curr->child[index]==NULL){
            curr->child[index]=new TrieNode();
        }
        curr=curr->child[index];
    }
    curr->isEnd=true;
}
int main(){
    string str="bad";
    insert(str);
    if(search(str)){
        cout<<str<<" is present in the trie.\n";
    }else{
        cout<<str<<" is not present in the trie.\n";
    }
    return 0;
}
