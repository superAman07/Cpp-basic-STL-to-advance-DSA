#include<iostream>
using namespace std;
void fillLPS(const string &str,int lps[]){
    int n=str.length(),len=0;
    lps[0]=0;
    int i=1;
    while(i<n){
        if(str[i]==str[len])
            lps[i++]=++len;
        else {
            if(len!=0)
                len=lps[len-1];
            else
                lps[i++]=0;
        }
    }
}
void KMP(const string &pat,const string &txt){
    int n= txt.length(),m=pat.length();
    int lps[m];
    fillLPS(pat,lps);
    int i=0,j=0;
    while(i<n){
        if(pat[j]==txt[i])
            i++,j++;
        if(j==m)
            cout<<"Found pattern at index "<<i-j<<endl,j=lps[j-1];
        else if(i<n && pat[j]!=txt[i]){
            if(j!=0)
                j=lps[j-1];
            else
                i++;
        }
    }
}
int main(){
    string txt="ababcababaad";
    string pat = "ababa";
    KMP(pat,txt);
    return 0;
}
