// Violation point for heap
// if parent value is greater than child's value i.e., every node has value smaller than it's descendant 
// it should be a complete binary tree...(no gap)
#include<iostream>
using namespace std;
struct min_heap{
    int *arr;
    int size;
    int capacity;
    min_heap(int c){
        capacity=c;
        arr=new int[c];
        size=0;
    }
    int left(int i){
        return 2*i+1;
    }
    int right(int i){
        return 2*i+2;
    }
    int parent(int i){
        return (i-1)/2;
    }
    void insert(int x){       // insert elements with taking care of violation of binary heap
        if(size==capacity)return;
        size++;arr[size-1]=x;
        for(int i=size-1;i!=0&& arr[parent(i)]>arr[i];){
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
// 1.
    void minHeapify(int i){     // if there is any violation in heap then it'll fix it
        int lt=left(i),rt=right(i);
        int smallest=i;
        if(lt<size && arr[lt]<arr[i])smallest=lt;
        if(rt<size && arr[rt]<arr[smallest])smallest=rt;
        if(smallest!=i){
            swap(arr[i],arr[smallest]);
            minHeapify(smallest);
        }
    }
// 2.
    int extractMin(){    // it will extract value then using minHeapify fx we can fix the violation
        if(size==0)return INT_MAX;
        if(size==1){size--;return arr[0];}
        swap(arr[0],arr[size-1]);
        size--;
        minHeapify(0);
        return arr[size];
    }
// 3.
    void decreaseKey(int i,int val){  // it will change the value of index i with value val and then we do traversal to the root to fix the violation...
        arr[i]=val;
        while(i!=0 && arr[parent(i)]>arr[i]){
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
// 4. Delete key by swapping index element with -infinity (using decreaseKey fx) then after we can simply use extractMin fx to remove minimum valued index
    void deleteKey(int i){
        decreaseKey(i,INT_MIN);
        extractMin();
    }
// 5. Build heapify...it will create a heap from random valued array
void buildHeap(){
    for(int i=(size-2)/2;i>=0;i--){
        minHeapify(i);   // passing value form height 0 to root (height of heap) and then minHeapify fx takes smallest element from left , right and its parent then swap parent with smallest one...that will create whole heap...
    }
}

 void display(){  // it'll simply display the heapify array...
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
};
int main(){
    min_heap h(10);
    h.insert(20);
    h.insert(25);
    h.insert(30);
    h.insert(35);
    h.insert(40);
    h.insert(80);
    h.insert(32);
    h.insert(100);
    h.insert(70);
    h.insert(60);
    cout<<"Binary Heap :";
    h.display();
    // h.minHeapify(0);
    cout<<"Minimum extracted value: "<<h.extractMin();
    cout<<"\nAfter extraction :";
    h.display();
    h.insert(20);
    cout<<"Insert 20:"; 
    h.display();
    int index=4,value=5;
    cout<<"After changing value at index "<<index<<" with value "<<value<<":";
    h.decreaseKey(index,value);
    h.display();
    return 0;
}
