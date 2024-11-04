Question 1: Create a simple class called Rectangle with two private attributes width and height. Add public methods to set the values of width and height, and another public method to calculate the area of the rectangle.
#include<iostream>
using namespace std;
class Rectangle{
    int width,height;
public:
    Rectangle(int w,int h){
        width=w;
        height=h;
    }
    void areaOfRectangle(){
        cout<<"Area is: "<<width*height<<"\n";
    }    
};
int main(){
    Rectangle r(5,10);
    r.areaOfRectangle();
    return 0;
}
Question 2: Let's build on this. Now, modify your Rectangle class so that it includes setter methods to update the values of width and height after the object has been created. Then, create a method in main() to update the dimensions of the rectangle and recalculate the area.
#include<iostream>
using namespace std;
class Rectangle{
    int width,height;
public:
    void setWidth(int w){
        width=w;
    }
    void setHeight(int h){
        height=h;
    }
    void areaOfRectangle(){
        cout<<"Area is: "<<width*height<<"\n";
    }    
};
int main(){
    Rectangle r;
    r.setWidth(3);
    r.setHeight(2);
    r.areaOfRectangle();
    return 0;
}

Question 3:Now, let’s move on to constructors. Modify your Rectangle class to include both:
A default constructor (that sets width and height to 0).
The parameterized constructor you used in the previous solution to initialize the dimensions right at object creation.
Then, in main(), try creating two objects:
One using the default constructor.
Another using the parameterized constructor.

#include<iostream>
using namespace std;
class Rectangle{
    int width,height;
public:
    Rectangle(){
        width=height=0;
    }
    Rectangle(int w,int h){
        width=w;
        height=h;
    }
    void areaOfRectangle(){
        cout<<"Area is: "<<width*height<<"\n";
    }    
};
int main(){
    Rectangle r1,r2(4,5); 
    r1.areaOfRectangle();
    r2.areaOfRectangle();
    return 0;
}

Question 4:Now, let's practice inheritance. Create a new class called Cuboid that inherits from Rectangle and has an additional int depth attribute. This class should:
Include a constructor that takes width, height, and depth as parameters.
Have a method to calculate the volume of the cuboid (width * height * depth) and print it.
In main(), create a Cuboid object and display both its area (from Rectangle) and volume.

#include<iostream>
using namespace std;
class Rectangle{
    protected:
    int width,height;
    public: 
    Rectangle(int w,int h){
        width=w;
        height=h;
    }
    void areaOfRectangle(){
        cout<<"Area is: "<<width*height<<"\n";
    }    
};
class cuboid:public Rectangle{
    int depth;
    public:
    cuboid(int w,int h,int d):Rectangle(w,h){
        depth=d;
    }
    void volume(){
        cout<<"Volume is :"<<width*height*depth<<"\n";
    }
};
int main(){
    cuboid r(4,5,6);
    r.areaOfRectangle(); 
    r.volume();
    return 0;
}


Question 5:Now, let’s explore polymorphism. Create a base class called Shape with a method area(). Then create two derived classes, Circle and Square, each overriding the area() method to compute their respective areas.
In your main() function, create an array of Shape* pointers, populate it with Circle and Square objects, and then call area() for each shape. This demonstrates how polymorphism allows you to call derived class methods through a base class reference.

#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void area(){
        cout<<"area of shape"<<"\n";
    }
};
class Circle:public Shape{
    float radius;
    public:
    Circle(float r){
        radius=r;
    }
    void area() override{
        cout<<"area of circle is: "<<3.14*radius*radius<<"\n";
    }
};
class Square:public Shape{
    float length;
    public:
    Square(float l){
        length=l;
    }
    void area() override{
        cout<<"Area of Square is:"<<length*length<<"\n";
    }
};
int main(){
    Shape* s[2];
    s[0] = new Circle(10.0);
    s[1]=new Square(4);
    for(int i=0;i<2;i++){
        s[i]->area();
    }
    return 0;
}

Question 6: Abstract Classes :- What is an abstract class in C++? Explain with an example. How does it differ from a regular class?
An abstract class is a class that cannot be instantiated and is designed to be inherited by other classes,
An abstract class is declared with the abstract keyword in C++11 and earlier versions, but in C++11 and later versions, it is declared with the = 0 at the end of the class declaration.

#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void area()=0;// pure virtual function (when we do "=0" to any vitural method/function it became pure vir fx)
};
class Circle:public Shape{
    float radius;
    public:
    Circle(float r){
        radius=r;
    }
    void area() override{ // aur override tabhi possible hai when we have done virtual class inside the base class...
        cout<<"area of circle is: "<<3.14*radius*radius<<"\n";
    }
};
class Square:public Shape{
    float length;
    public:
    Square(float l){
        length=l;
    }
    void area() override{
        cout<<"Area of Square is:"<<length*length<<"\n";
    }
};
int main(){
    Shape* s[2];
    s[0] = new Circle(10.0);
    s[1]=new Square(4);
    for(int i=0;i<2;i++){
        s[i]->area();
    }
    return 0;
}

Question 7: Explain operator overloading in C++. Write a program to overload the + operator for a Complex class that represents complex numbers. The class should include a method to display the complex number.
ans: when we like add two different data types...then this is termed as operator overloading... like int a,sum; float b;
sum=a+b; --->this is overloading of operators

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


Question 8:

Implement function overloading in C++. Write a Calculator class that has overloaded methods add for the following operations:

Adding two integers.
Adding two floating-point numbers.
Concatenating two strings.

#include<iostream>
using namespace std;
class Calculator{
    public:
    int add(int a,int b){
        return (a+b);
    }
    double add(double a,double b){
        return (a+b);
    }
    string add(string a,string b){
        return a+b;
    }
};
int main(){
    Calculator c;
    cout<<c.add(5,7)<<endl; 
    cout<<c.add(5.5,7.7)<<endl;
    cout<<c.add("Hello ","World")<<endl;
    return 0;
}

Question 9:
Explain templates in C++. Write a program that implements a simple template function called swapValues to swap two values of any data type. The function should take two parameters by reference and swap their values. Demonstrate its use in the main function with different data types (e.g., integers and doubles).

#include<iostream>
using namespace std;
template <typename T>
void swapValues(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    int x=5,y=10;
    cout<<"Before swapping: x = "<<x<<" y = "<<y<<endl;
    swapValues(x,y);
    cout<<"After swapping: x = "<<x<<" y = "<<y<<endl;
    double d1=5.5,d2=10.5;
    cout<<"Before swapping: d1 = "<<d1<<" d2 = "<<d2<<"\n";
    swapValues(d1,d2);
    cout<<"After swapping: d1 = "<<d1<<" d2 = "<<d2<<"\n";
    return 0;
}

Question 10:
What is the difference between a shallow copy and a deep copy in C++? Implement a class that demonstrates both shallow and deep copy semantics. The class should include a pointer to dynamically allocated memory. Show the difference in behavior when copying objects of this class.
Answer: deep copy me pointer and location dono hi copy hote hai aur shallow me bass pointer...
#include <iostream>
using namespace std;

class ShallowCopy {
    int* data;
public:
    ShallowCopy(int value) {
        data = new int(value); // Allocate memory
    }
    // Shallow copy constructor
    ShallowCopy(const ShallowCopy& other) {
        data = other.data; // Only copy the pointer
    }
    ~ShallowCopy() {
        delete data; // Dangerous: may lead to double deletion
    }
    void display() {
        cout << "Value: " << *data << endl;
    }
};

class DeepCopy {
    int* data;
public:
    DeepCopy(int value) {
        data = new int(value); // Allocate memory
    }
    // Deep copy constructor
    DeepCopy(const DeepCopy& other) {
        data = new int(*other.data); // Create a new copy of the data
    }
    ~DeepCopy() {
        delete data; // Safe: each object manages its own memory
    }
    void display() {
        cout << "Value: " << *data << endl;
    }
};

int main() {
    // Shallow Copy example
    cout << "Shallow Copy Example:" << endl;
    ShallowCopy sc1(10);
    ShallowCopy sc2 = sc1; // This invokes the shallow copy constructor
    sc1.display();
    sc2.display(); // Both display the same value
    // Uncommenting the following line will cause an issue
    // delete sc1; // Deletes the memory, but sc2 now has a dangling pointer

    // Deep Copy example
    cout << "Deep Copy Example:" << endl;
    DeepCopy dc1(20);
    DeepCopy dc2 = dc1; // This invokes the deep copy constructor
    dc1.display();
    dc2.display(); // Both display the same value
    // Now we can safely delete dc1, as dc2 has its own copy of the data

    return 0;
}
