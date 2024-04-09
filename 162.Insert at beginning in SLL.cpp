// #include<iostream>
// using namespace std;
// struct node{
//     int data;
//     node* next;
//     node(int x){
//         data = x;
//         next = NULL;
//     }
// };
// void insertAtBeg(node*head,int x){
//     node* ptr=new node(x);
//     ptr->next=head;
//     head=ptr;
//     node* q=head; 
//     while(q!=NULL){
//         cout<<q->data<<" ";
//         q=q->next;
//     }
// }
// int main(){
//     int x=5;
//     node* head = new node(10);
//     head->next = new node(20);
//     head->next->next = new node(30);
//     head->next->next->next = new node(40);
//     insertAtBeg(head,x);
//     return 0;
// }

#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x){
        data = x;
        next = NULL;
    }
};
node* insertAtBeg(node*head,int x){
    node* ptr=new node(x);
    ptr->next=head;
    return ptr;
}
int main(){
    node* head = NULL;
    head = insertAtBeg(head,40);
    head = insertAtBeg(head,30);
    head = insertAtBeg(head,20); 
    head = insertAtBeg(head,10); 
    node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;
}
