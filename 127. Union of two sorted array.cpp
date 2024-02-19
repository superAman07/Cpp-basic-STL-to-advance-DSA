//TC O(n+m) and Aux Space O(1)

#include<iostream>
using namespace std;
int main(){
    int a[]{3,5,8};
    int b[]{2,8,9,10,15};
    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);
    int i=0,j=0;
    while(m>i && n>j){
        if(a[i]==a[i+1]){
            i++;
            continue;
        }
        if(b[j]==b[j+1]){
            j++;
            continue;
        }
        if(a[i]<b[j]){
            cout<<a[i++]<<" ";
        }
        else if(b[j]>a[i]){
            cout<<b[j++]<<" ";
        }
        else{
            cout<<a[i]<<" ";
            i++;j++;
        }
    }
    while(m>i){
        cout<<a[i++]<<" ";
    }
    while(n>j){
        cout<<b[j++]<<" ";
    }
    return 0;
}
