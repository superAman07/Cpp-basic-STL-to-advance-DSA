 #include<bits/stdc++.h>
 using namespace std;
 //void getmax(int x,int y){
 //   int  z=(x>y)?x:y;
 //   cout<<z<<"\n";
 //}
 int getmax(int x,int y){
    int z=(x>y)?x:y;
    return z;
 }
 int main(){
    int x,y;
    cout<<"enter values\n";
    cin>>x>>y;
   cout<< getmax(x,y);
    return 0;
 }