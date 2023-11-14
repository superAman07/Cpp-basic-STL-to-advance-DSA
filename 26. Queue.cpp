// #include<iostream>
// #include<queue>
// int main(){
//     std::queue<int>q;
//     q.push(10);
//     q.push(17);
//     q.push(27);
//     std::cout<<q.front()<<" "<<q.back();
//     q.pop();
//     std::cout<<"\n"<<q.front()<<" "<<q.back();
//     return 0;
// }

// queue traversing

#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(10);
    q.push(17);
    q.push(27);
    cout<<q.size()<<"\n";
    // while(!q.empty()){
    //     cout<<q.front()<<' ';
    //     q.pop();
    // }
    while(q.empty()==false){
        cout<<q.front()<<" "<<q.back()<<"\n";
        q.pop();
    std::cout<<"size:"<<q.size()<<"\n";
    }
    return 0;
}