#include<bits/stdc++.h>
using namespace std;
//void table(int n){
//    for(int i=1;i<=10;i++){
//        cout<<n*i<<"\n";
//    }
//}
//int main(){
//    int n;
//    cin>>n;
//    table(n);
//    return 0;
//}

//without loop
void table(int n, int i){
     if(i>10){
        return;
     }
     else{
          int i=1;
        cout<<n*i<<"\n";
        i+=1;
     }
}
int main(){
    int n,i;
    cout<<"Enter the number:\n";
    cin>>n;
    table(n,i);
    return 0;
}