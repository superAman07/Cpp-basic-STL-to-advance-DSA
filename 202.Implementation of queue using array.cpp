// Simple implementation (except deque fx all takes constant space)
// #include<iostream>
// using namespace std;
// struct queue{
//     int size,cap;
//     int *arr;
//     queue(int c){
//         cap=c;
//         size=0;
//         arr=new int [cap];
//     }
//     bool isFull(){return size==cap;}
//     bool isEmpty(){return size==0;}
//     void enque(int x){
//         if(isFull())return;
//         arr[size++]=x;
//     }
//     // O(size)
//     void deque(){
//         if(isEmpty())return;
//         for(int i=0;i<size-1;i++){
//             arr[i]=arr[i+1];
//         }
//         size--;
//     }
//     int getFront(){
//         if(isEmpty())return -1;
//         else return arr[0];
//     }
//     int getRear(){
//         if(isEmpty())return -1;
//         else return arr[size-1];
//     }
// };
// int main(){
//     queue q(5);
//     q.enque(10);
//     q.enque(20);
//     q.enque(30);
//     cout<<q.getFront()<<"\n";
//     q.enque(40);
//     cout<<q.getRear()<<"\n";
//     q.deque();
//     q.deque();
//     return 0;
// }

// Efficient solution constant space for all functions using circular array

#include<iostream>
using namespace std;
struct queue{
    int front,size,cap;
    int *arr;
    queue(int c){
        cap=c;
        front=0;
        size=0;
        arr=new int [cap];
    }
    bool isFull(){return size==cap;}
    bool isEmpty(){return size==0;}
    int getFront(){
        if(isEmpty())return -1;
        else return front;
    }  
    int getRear(){
        if(isEmpty())return -1;
        else return (front+size-1)%cap;
    }
    void enque(int x){
        if(isFull())return;
        int rear=getRear();
        rear = (rear+1)%cap;
        arr[rear]=x;
        size++;
    }
    void deque(){
        if(isEmpty())return;
        front = (front+1)%cap;
        size--;
    }
};
int main(){
    queue q(5);
    q.enque(10);
    q.enque(20);
    q.enque(30);
    cout<<q.getFront()<<"\n";
    q.enque(40);
    cout<<q.getRear()<<"\n";
    q.deque();
    q.deque();
    return 0;
}
