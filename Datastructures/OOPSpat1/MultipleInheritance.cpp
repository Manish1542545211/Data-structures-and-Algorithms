#include<iostream>
using namespace std;
//Multiple inheritance example 
class Teacher{
    public:
    int salary;
    string subject;

};
class Student {
    public:
    int rollno;
    float cgpa;
};
//multiple inheritance
class TA : public Teacher,public Student{
    public:
    string name;
};


int main(){
    TA ta1;
    ta1.name="shradha khapra";
    ta1.subject="c++";
    ta1.cgpa=9.1;
    cout<<ta1.name<<endl;
    cout<<ta1.subject<<endl;
    cout<<ta1.cgpa<<endl;
}