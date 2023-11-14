#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    cout<<"Before operation\n"<<v.size()<<"\n"<<v.capacity();
    v.push_back(10);
    v.push_back(17);  //while insertion of next element -> the prev element get
    v.push_back(27);  // copied on with next element and deleted auto
    cout<<"\nAfter Operation\n"<<v.size()<<"\n"<<v.capacity();
    return 0;
}