#include<iostream>
using namespace std;

class abc
{
public:
    static int x, y;

  static void print() {

        //this
        cout<< x <<" "<< y <<endl;
        //cout<<this->x<<" "<<this->y<<endl    
    }
};

int abc::x;
int abc::y;
int main(){
    // abc obj1 = {1, 2};
    // abc obj2={4, 5};
    // obj1.print();
    // obj2.print();
    abc obj1;
    abc::x = 1;
    y=2;
    abc::print

    return 0;
}