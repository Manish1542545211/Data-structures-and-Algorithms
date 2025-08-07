#include<iostream>
#include <string>
using namespace std;
class Parent{
    public:
    void show(){
        cout<<"parent class show:\n";
    }
};
class Child :public Parent{
    public:
    void show(){
        cout<<"child class show...\n";
    }
};

int main(){
    Child c1;
    c1.show();//logically same property parent contain has the child so any one can execute but fucntion is different so the parent 
    //class part is overridden by the child class

}