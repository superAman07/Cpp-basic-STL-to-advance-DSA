#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=5;
    bool y=(x==5)||x++;         
    cout<<y<<"\t"<<x<<"\n";               //same for AND operator     o/p= 1     5
    bool z=(x==4)||x++;
    cout<<z<<"\t"<<x<<"\n";               //same for AND operator     o/p= 1     6
    int a=4,b=6,c=7,d,e;
    d=(a,b,c);                            // comma operator has low precedence and associativity of comma operator is from right to left
    cout<<d<<"\n";                        // o/p= c i.e., 7
    e=a,b,c;
    cout<<e<<"\n";                        // o/p= a i.e., 4              because comma has least priority
    if(c>b>a){                             // output will be No because is execute from L to R so (c>b) is true i.e., 1 which is less than a
        cout<<"YES";
    }
    else{
        cout<<"No";
    }
    return 0;
}