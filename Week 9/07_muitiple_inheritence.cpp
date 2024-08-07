#include<iostream>
#include<string>
#include<vector>


using namespace std;

class Person{
    public:
    void walk(){
        cout<<"Walking.."<<endl;
    }
};

class Teacher:virtual public Person{
public:
void teach(){
    cout<<"Teaching...."<<endl;
}
};

class Researcher:virtual public Person
{
    public:
    void research()

{
    cout<<"Researching..."<<endl;
}
};


class Professor:public Teacher,public Researcher{
public:
void bore()
{
    cout<<"Boring..."<<endl;
}
};

int main(){

    Professor p;
    //p.walk();

    //Diamond Problem
    //Solution 1: scope Resolution
    //p.Teacher::walk();
    //p.Researcher::walk();


    //dono ka ek hi walk hai
    //virtually inherit karna hai
    //solution 2:virtual

    p.walk();
    
    return 0;
}
