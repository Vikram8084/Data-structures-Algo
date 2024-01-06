program 11

//To use pointer for both base and derived 
//classes and call the member function 
//use virtual keyword.

#include<iostream>
using namespace std;
class Shape{
public:
     virtual void draw(){
    cout<<"Default Shape has been Drawn.\n";
     }
};

class Circle:public Shape{
public:
//Function Overriding
     void draw(){
    cout<<"Circle has been Drawn.\n";
     }
};
int main() {
Shape *s1 = new Shape;
Shape *s2 = new Circle;
Shape *ptr;
Circle c1;
ptr = &c1;
s1->draw();
s2->draw();
ptr->draw();
return 0;
}