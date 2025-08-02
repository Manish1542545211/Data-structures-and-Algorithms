#include<iostream>
using namespace std;
//hierarchial inheritance
class Animal{
    public:
    void eat(){
        cout<<"eat\n";
    }
    void breathe(){
        cout<<"breathe";
    }
};
class Bird : public Animal{
    public:
    void fly(){
        cout<<"fly\n";
    }
};
class Fish : public Animal{
    public:
    void Swim(){
        cout<<"swim\n";
    }
};
class Mammal :public Animal{
    public:
    void walk(){
        cout<<"wlak\n";
    }
};
int main(){
    Bird B1;
    Fish F1;
    Mammal M1;

    M1.walk();
    M1.eat();
    M1.breathe();
    

}