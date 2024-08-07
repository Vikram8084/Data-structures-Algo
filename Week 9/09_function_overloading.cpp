#include<iostream>
#include<string>
#include<vector>

using namespace std;

//function overloading
class Vector
{
    int x, y;
public:

//  Vector(int x, int y)
//  {
//     this->x = x;
//     this->y= y;
//  }
  

  //init list

  Vector(int x, int y) : x(x), y(y) {}

  //op overloading
  void operator+(const Vector &src)
{
     //thiscwould point to v1
     //src would be ref to v2;
     this->x = this->x +src.x;
     this->y = this->y + src.y;
}
  void display(){
    cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
  }
};

int main()
{
    Vector v1(2,3);
    Vector v2(4, 5);

    v1 + v2;

    //addition answer should be stored in v1
    v1.display();

    return 0;
}
