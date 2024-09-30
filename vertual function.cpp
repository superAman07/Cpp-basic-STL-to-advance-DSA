//#include<bits/stdc++.h>
//using namespace std;
//class base{
//    public:
//    void print(){
//        cout<<"Base"<<"\n";
//    }
//};
//class derived:public base{
//    public:
//    void print(){
//        cout<<"Derived"<<"\n";
//    }
//};
//int main(){
//    base b;
//    derived d;
//    b.print();
//    d.print();
//    base *ptr=&d;                                          // ideally it should print "Derived" but it will print "Base" 
//    ptr->print();                                  // we can use vertual function to make this better , have a look in below one
//    return 0;
//}
//


//#include<bits/stdc++.h>
//using namespace std;
//class base{
//    public:
//    virtual void print(){
//        cout<<"Base"<<"\n";
//    }
//};
//class derived: public base{
//    public:
//    void print(){
//        cout<<"Derived"<<"\n";
//    }
//};
//int main(){
//    base b;
//    derived d;
//    b.print();
//    d.print();    
//    base *ptr=&d;
//    ptr->print();
//    return 0;
//}

   // override keyword

#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    virtual void print(){
        cout<<"Base"<<"\n";
    }
};
class derived: public base{
    public:
    void print() override{
        cout<<"Derived"<<"\n";
    }
};
int main(){
    base *b=new derived();
    b->print();
    return 0;
}