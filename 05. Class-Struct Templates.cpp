#include<bits/stdc++.h>
using namespace std;
template<typename T>
struct pair{
   public:
    T x,y;
    pair(T i, T j){
        this->x=i;
        this->y=j;
    }
    T getfirst(){return x;}
    T getsecond(){return y;}
};
int main(){
    pair<int>p1(10,17);
    cout<<p1.getfirst()<<" "<<p1.getsecond()<<"\n";
    return 0;
}