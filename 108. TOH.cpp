#include<iostream>
using namespace std;
void TOH(int n,char A ,char B, char E){
    if(n==1){
        cout<<"Move 1 from "<<A<<" to "<<E<<"\n";
        return; 
    }
    TOH(n-1,A,E,B);
    cout<<"Move "<<n<<" from "<<A<<" to "<<E<<"\n";
    TOH(n-1,B,A,E);
}
int main(){
    TOH(4,'A','B','E');
    return 0;
}