// #include<iostream>
// using namespace std;
// struct node{
//     int data;
//     node* next;
//     node(int z){
//         data=z;
//         next=NULL;
//     }
// };
// node* insertAtBeg(node* &head,int x){
//     node* ptr=new node(x);
//     node*temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=ptr;
//     return head;
// }
// int main(){
//     int x=50;
//     node* head= new node(10);
//     head->next=new node(20);
//     head->next->next=new node(30);
//     head->next->next->next=new node(40);
//     head=insertAtBeg(head,x);
//     node*ptr=head;
//     while(ptr!=NULL){
//         cout<<ptr->data<<" ";
//         ptr=ptr->next;
//     }
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
node* insertAtEnd(node*head,int x){
     node* ptr=new node(x);
     if(head==NULL){    //if we don't do this it will throw segmentation fault
        head=ptr;
    }else{
        node * temp=head;
        while(temp->next!=NULL){
           temp=temp->next;
        } 
        temp->next=ptr;
    } 
     return head;
}
int main(){
    node* head = NULL;
    head = insertAtEnd(head,10);
    head = insertAtEnd(head,20);
    head = insertAtEnd(head,30); 
    head = insertAtEnd(head,40); 
    node *ptr=head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    return 0;
}
