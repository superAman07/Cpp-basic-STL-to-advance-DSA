#include<bits/stdc++.h>
using namespace std;
class person{
    protected:
    string name;
    int age;
};
class student: public person{
    private:
    int marks;
    public:
    void print(){
        cout<<name<<" "<<age<<" "<<marks<<"\n";
    };
};
int main(){
    student s;
    s.print();
    return 0;
}