#include<iostream>
#include<stack>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};
// Naive solution in O(n) time and O(1) space;
bool isPalindromeNaive(node* head){
    stack<char>st;
    for(node* curr=head;curr!=NULL;curr=curr->next){
        st.push(curr->data);
    }
    for(node* curr=head;curr!=NULL;curr=curr->next){
        if(st.top()!=curr->data){
            return false;
        }
        st.pop();
    }
    return true;
}
// Efficient approach with O(n) time and O(1) space;
node* reverseLL(node* head){
    if(head==NULL||head->next==NULL)return NULL;
    node* rest_head=reverseLL(head->next);
    node* rest_tail=head->next;
    rest_tail->next=head;
    head->next=head;
    return rest_head;     
}
bool isPalindrome(node* head){
    if(head==NULL)return true;
    node* slow=head,*fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    node* rev=reverseLL(slow->next);
    node* curr=head;
    while(rev!=NULL){
        if(rev->data!=curr->data)return false;
        rev=rev->next;
        curr=curr->next;
    }
    return true;
}
int main(){
    node* head=new node('c');
    head->next=new node('i');
    head->next->next=new node('v');
    head->next->next->next=new node('i');
    head->next->next->next->next=new node('c');
    // cout<<boolalpha<<isPalindromeNaive(head);
    cout<<boolalpha<<isPalindrome(head);
    return 0;
}
