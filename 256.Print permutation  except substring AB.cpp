#include<iostream>
#include<string>
using namespace std;
bool isSafe(string str,int l,int i,int r){
    if(l!=0 && str[l-1]=='A'&& str[i]=='B')return false;
    if(r=l+1 && str[l]=='A'&& str[i]=='B')return false;
    return true;
}
void permute(string s,int l,int r){
    if(l==r){
        if(s.find("AB")==string::npos){
            cout<<s<<"\n";
        }
    }else{
        for(int i=l;i<=r;i++){
            if(isSafe(s,l,i,r)){
                swap(s[l],s[i]);
                permute(s,l+1,r);
                swap(s[l],s[i]);
            }
        }
    }
}
int main(){
    string str="ABC";
    permute(str,0,3);
    return 0;
} 
