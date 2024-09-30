#include<bits/stdc++.h>
using namespace std;
void EmployeeDetails(int id,string name="NA", string address="NA"){
    cout<<"Your ID is "<<id<<"\n";
    cout<<"Your Name is "<<name<<"\n";
    cout<<"Your Address is "<<address<<"\n";
}
int main(){
    EmployeeDetails(101,"Aman","Lucknow");
    cout<<"\n";
    EmployeeDetails(107,"Alien");
    cout<<"\n";
    EmployeeDetails(109);
    return 0;
}