#include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
    int real;
    int imag;
    public:
    void print(){
        cout<<real<<"+i"<<imag<<"\n";
    }
    Complex(int r,int i){ // function has same name as class name is called constructor (u can put all that code like 
        r=real;                    //a name don't have any special character)
        i=imag;
    }
};
int main(){
    Complex c1(2,5);
    c1.print();
    return 0; 
}

