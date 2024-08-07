#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Animal
{
public:
    void sound()
    {
        cout<<"Animal making Sound"<<endl;
    }
};

class Dog:public Animal
{
public:
    void sound()
    {
        cout<<"Dog Barking"<<endl;
    }
};
class Cat:public Animal
{
public:
    void sound()
    {
        cout<<"Cat Meowing"<<endl;
    }
};

void sound(Animal *animal)
{
    animal->sound();
}
int main(){
    // Dog *dog = new Dog();
   // dog->sound();

//    Animal *animal =new Animal();
//    animal->sound();
Animal *animal =new Dog();
sound(animal);


    return 0;
}