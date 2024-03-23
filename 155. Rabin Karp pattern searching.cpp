#include<iostream>
using namespace std;
void RKSearch(string &pat,string &txt,int m,int n){
    int h=1;
    for(int i=0;i<m-1;i++){
        h=(h*23) %65537;
    }
    int p=0,t=0;
    for(int i=0;i<m;i++){
        p=(p*23+pat[i]) %65537;
        t=(t*23+txt[i]) %65537;
    }
    for(int i=0;i<=n-m;i++){
        if(p==t){
            bool flag=true;
            for(int j=0;j<m;j++){
                if(txt[i+j]!=pat[j]){
                    flag=false;
                    break;
                }
            }
            if(flag==true){
                cout<<"Pattern found at index "<<i<<endl;
            }
        }
        if(i<n-m){
            t=(23*(t-txt[i]*h)+txt[i+m]) %65537;
            if(t<0){
                t=(t+65537);
            }
        }
    }
}
int main(){
    string txt="ABAAABCD";
    string pat="ABC";
    RKSearch(pat,txt,3,9);
    return 0;
}
