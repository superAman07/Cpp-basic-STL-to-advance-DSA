#include<iostream>
using namespace std;
class student{
    string name;
    public:
    int age;
    bool gender;
    void setdata(string n){
        name=n;
        // age=a;
        // gender=g;
    }
    student(){cout<<"Default constructor\n";}   // default constructor
    student(string s,int a,int g){
        cout<<"Parameterised Constructor\n";
        name=s; age=a; gender=g;} // parameterised constructor
    student(student &a){
        cout<<"copy constructor\n";
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    // ~student(){cout<<"Destructor called\n";}  //destructor
    void printInfo(){
        cout<<"Name = ";
        cout<<name<<"\n";
        cout<<"Age = ";
        cout<<age<<"\n";
        cout<<"Gender = ";
        cout<<gender<<"\n";
    }
    void getname(){
        cout<<name<<"\n";
    }
    bool operator==(student &a){
        if(name==a.name && age==a.age && gender==a.gender){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    // student arr[3];
    // s.name="Vegeta";
    // s.age=2100;
    // s.gender=1;
    // 
    // for(int i=0;i<3;i++){
    //     arr[i].printInfo();
    // }
    student a("Vegeta",2100,1);
    // a.printInfo();
    student b;
    // b.printInfo();
    student c(a);// student c=a;
    if(b==a){
        cout<<"Same\n";
    }
    else{
        cout<<"Not same\n";
    }
    return 0;
}