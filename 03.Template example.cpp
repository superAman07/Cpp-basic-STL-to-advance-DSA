#include<bits/stdc++.h>
using namespace std;
template<typename t>
t myMax(t x,t y){
    return (x>y)?x:y;
}
int main(){
    cout<<myMax<int>(3,7)<<"\n";
    cout<<myMax<char>('a','t')<<"\n";
    cout<<myMax<float>(7.5,7.6);
    return 0;
}