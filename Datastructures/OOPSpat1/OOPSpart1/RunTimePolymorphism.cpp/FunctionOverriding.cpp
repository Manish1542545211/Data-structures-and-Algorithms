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
    c1.show();

}