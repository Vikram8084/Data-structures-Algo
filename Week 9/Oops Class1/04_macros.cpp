#include<iostream>
using namespace std;
// here we cn made macros for pi
// # define means compile se pahle processing hoga
// macro code ki readibility badha rha hai
# define PI 3.14159465

# define MAXX(x, y) (x >y ? x : y )
float circleArea( float r)
{
    return PI * r * r;
}
float perimeterofCircle(float r)
{
    return 2 * PI * r;
}
void fun(){
    int x =6; 
    int b =17;
    int c = MAXX(x, b);
}
void fun2(){
    int x =6; 
    int b =17;
    int c = MAXX(x, b);
}
void fun3(){
    int x =6; 
    int b =17;
    int c = MAXX(x,b);
}
int main(){
    cout<< circleArea(65.4) << endl; 
    cout<<"Perimeter of circle: "<<perimeterofCircle(2.4)<<endl;
    return 0;
}
