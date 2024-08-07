#include<iostream>
using namespace std;
class abc
{
    int x;
    int *y;
    int z;
public:
// initialization list
abc(int _x, int _y, int _z=0):x(_x),y(new int(_y)), z(_z){
    cout<<"in init list"<<endl;
    *y =*y *10;
}

int getX() const{
    return x;
}
void setX(int _val){
    x = _val;
    }
    int getY() const{
        return *y;

    }
    int getZ() const{
        return z;
    }

};
void printABC(const abc &a)
{
    cout<<a.getX()<<" "<<a.getZ()<<endl;
}
int main(){
    abc a(1, 2, 3);
    printABC(a);
    return 0;

}