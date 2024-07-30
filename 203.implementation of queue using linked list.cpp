// if we dont go to display elements of queue then overall complexity become O(1) i.e., in constant time...
#include<iostream> 
using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
struct queue{
    int size;
    node* front , *rear;
    queue(){
        front =rear=NULL;
        size=0;
    }
    void enque(int x){
        size++;
        node* temp = new node(x);
        if(front == NULL){
            front=rear= temp;
            return;
        }
        rear=temp->next;
        rear= temp;
    }
    void deque(){
        size--;
        if(front ==NULL)return;
        node* temp = front;
        front = front->next;
        if(front == NULL)rear=NULL;
        delete(temp);
    }
    int Size(){
        return size;
    }
    bool empty(){
        return size==0;
    }
    int getFront(){
        if(front !=NULL){return front->data;}
        else{
            throw out_of_range("Queue is empty!!!");
        }
    }
    int getRear(){
        if(rear!=NULL){
            return rear->data;
        }else{
            throw out_of_range("Queue is empty...");
        }
    }
    void display(){
        node* curr=front;
        while(curr!=NULL){
            cout<<curr->data<<" ";
            curr=curr->next;
        }
        cout<<"\n";
    }
};
int main(){
    queue q;
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.enque(40);
    q.deque();
    q.display();
    try{
        cout<<"front: "<<q.getFront()<<"\n";
        cout<<"last: "<<q.getRear()<<"\n"; 
        cout<<"Size: "<<q.Size();
    }catch(const out_of_range& e){
        cout<< e.what() << '\n';
    }
    
    return 0;
}
