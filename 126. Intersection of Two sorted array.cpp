//TC O(m+n)
#include<iostream>
using namespace std;
int main(){
    int a[]{3,5,10,10,10,15,15,20};
    int b[]{5,10,10,15,30};
    int m = sizeof(a)/sizeof(a[0]);
    int n = sizeof(b)/sizeof(b[0]);
    int i=0,j=0;
    while(m>i && n>j){
        if(a[i]==b[j]){
            cout<<a[i]<<" ";
            i++;j++;
        }
        else if(a[i]<b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return 0;
}
