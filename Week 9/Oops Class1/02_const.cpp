#include<iostream>
using namespace std;

class abc{

    int x;
    int *y;
public:
    abc(){
        x = 0;
        y = new int(0);

    }
    abc(int _x, int _y){
        x = _x;
        *y = _y;

    }

    int getX() const{
        return x;
    }
    void setX(int _val){
        x = _val;
    }
    int getY(){
        return *y;
    }
    void setY(int _val){
        *y = _val;
    }
};

void printABC(const abc &a){
    cout<<a.getX() <<" "<< a.getY()<<endl;
}

int main(){
    abc a(1, 2); 
    printABC(a);
    abc a;
    cout<<a.getX()<<endl;
    cout<<a.getY()<<endl;

    return 0;
}

int main2(){
    const int x =5; //x is constant
    // initialistion can be done
    //but we can not re -assign a value
    //x =10; // it gives error
    //cout<<x<<endl;


    //2.const with pointers
    //const int *a = new int(2);// const data, non- const pointer
    //int const *a = new int(2); // same line no 13
    //  cout<< *a<<endl;
   // *a =20; //cant change the content of pointer
   // cout << *a <<endl;
    // int b=20;
    // a = &b;
    // cout<< *a <<endl;

    // CONST pointer, but NON-CONST data
    //int *const a =new int(2);
    //cout<<*a<<endl;
    //*a =20; // chal jayega 
    //int b =50;
    //a=&b;//nhi chalega ,CONST pointer


    //CONST pointer , const data
    // const int *const a =new int(10);
    // cout<<*a <<endl;
    // *a = 50;
    // int b=100;
    // a = &b;

    //




    return 0;
}