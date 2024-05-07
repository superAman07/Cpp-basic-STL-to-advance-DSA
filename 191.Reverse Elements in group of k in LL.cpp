#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};
// Recursive solution  to reverse a linked list in O(n)  time complexity and O(n/k) space complexity.
// node* reverseK(node* head,int k){
//     node* prevptr=NULL;
//     node* currentptr=head;
//     node* nextptr=NULL;
//     int count=0;
//     while(currentptr!=NULL && count<k){
//         nextptr=currentptr->next;
//         currentptr->next=prevptr;
//         prevptr=currentptr;
//         currentptr=nextptr;
//         count++;
//     }
//     if(nextptr!=NULL){
//         node* rest_head=reverseK(nextptr,k);
//         head->next=rest_head;
//     }
//     return prevptr;
// }

//Efficient solution using iterative sol
node* reverseK(node* head,int k){
    node* curr=head,*prevFirst=NULL;
    bool isFirstPass=true;
    while(curr!=NULL){
        node* first=curr;
        node* prev=NULL;
        int count=0;
        while(curr!=NULL && count<k){
            node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(isFirstPass){
            head=prev;
            isFirstPass=false;
        }else{
            prevFirst->next=prev;
        }
        prevFirst=first;
    }
    return head;
}
int main(){
    node* head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next->next=new node(5);
    //head=reverseK(head,2);
    head=reverseK(head,3);
    node* ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;
}
