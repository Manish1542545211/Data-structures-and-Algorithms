#include<iostream>
#include<string>
using namespace std;
 class Parent {
    public:
    virtual void hello(){
      cout<<"Parnet Hello";}
 };
 class Child :public Parent{
    public:
    void hello(){
     cout<<"Child hello\n";
    }
 };
int main(){
    Child obj;
    Parent *ptr;
    ptr=&obj;//run time binding (with help of parent pointer we are pointing toward the child object )
     ptr->hello();//virtual function



}