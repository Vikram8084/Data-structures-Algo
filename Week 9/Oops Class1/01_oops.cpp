#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Student
{ 
private:    
    string gf;
public:
    int id;
    int age;
    string name;
    int nos;
    bool present;
    //ctor: default constructor
    Student()
    {
        cout<<"Student ctor called"<<endl;
    }

    Student(int _id, int _age, bool _present, string _name, int _nos, string _gfname){
        id = _id;
        age = _age;
        present = _present;
        name = _name;
        nos = _nos;
        gf = _gfname;
        cout<<"Student parametarized ctor called"<<endl;

    }
    Student(int _id, int _age, bool _present, string _name, int _nos){
        id = _id;
        age = _age;
        present = _present;
        name = _name;
        nos = _nos;
        
        cout<<"Student parametarized ctor without gf called"<<endl;

    }

    void study()
    {
        cout<<"studying"<<endl;
    }
    void sleep(){
        cout<<"sleeping"<<endl;
    }
    void bunk(){
        cout<<"bunking"<<endl;
    }
private:
    void gfchatting()
    {
        cout<<"chatting"<<endl;
    }
};

int main(){
    // int id1, id2;
    // string name1,name2;
    // int age1, age2;
    // int nos1, nos2;
    // int marks1[5], marks2[5];
    //cout<<sizeof(Student)<<endl;
    Student s1;

    Student s2(1, 12,1, "vikram", 1, "Chutkki" );
    cout<<s2.name <<endl;
    cout<<s2.id<<endl;
    //cout<<s2.gf<<endl;//nhi jan skte kyonki ye private hai
    Student s3(2, 15, 0, "vikrant", 5);
    cout<<s3.name<<endl;
    //cout<<s1.age<<endl;
    // s1.name="vikram";
    // s1.age=21;
    // s1.id=1;
    // s1.nos=5;
    
    // Student s2;
    // s2.name ="vikrant";
    // s2.age= 23;
    // s2.id =2;
    // s2.nos=5;
    return 0;
}
