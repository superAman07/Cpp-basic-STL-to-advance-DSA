#include<iostream>
using namespace std;
class Complex{
    float img,real;
    public:
    Complex(float r,float i){
        real=r;
        img=i;
    }
    Complex operator+(const Complex& other){
        return Complex(real+other.real,img +other.img);
    }
    void display(){
        cout<<real<<"+i"<<img<<"\n";
    }
};
int main(){
    Complex c1(3,4);
    Complex c2(2,7);
    Complex c3=c1+c2;
    c3.display();
    return 0;
}
