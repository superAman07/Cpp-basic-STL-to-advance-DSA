// efficient method with 2 traversal
// #include<iostream>
// using namespace std;
// const int CHAR=256;
// int nonRep(string &str){
//     int count[CHAR]={0};
//     for(int i=0;i<str.length();i++){
//         count[str[i]]++;
//     }
//     for(int i=0;i<str.length();i++){
//         if(count[str[i]]==1){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     // string str ="geeksforgeeks";
//     string str ="abbcbda";
//     cout<<nonRep(str);
//     return 0;
// }

//Another efficient way in one traversal
#include<iostream>
using namespace std;
const int CHAR=256;
int nonRep(string &str){
    int fi[CHAR];
    fill(fi,fi+CHAR,-1);
    for(int i=0;i<str.length();i++){
        if(fi[str[i]]==-1){
            fi[str[i]]=i;
        }
        else{
            fi[str[i]]=-2;
        }
    }
    int res=INT_MAX;
    for(int i=0;i<CHAR;i++){
        if(fi[i]>=0){
          res=max(res,fi[i]);
        }
    }
    return (res==INT_MAX)?-1:res;
}
int main(){
    string str="geeksforgeeks";
    cout<<nonRep(str);
    return 0;
}
