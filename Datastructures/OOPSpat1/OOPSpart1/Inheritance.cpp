#include<iostream>
using namespace std;
//single inheritance
class Animal{
public:
   string color ;
   void eat(){
    cout<<"eats..\n";
   }
   void breathe(){
    cout<<"breathes..\n";
   }

};
class Fish:protected Animal{//mode of inherithance is protected
public:
   int fins;
   void swim(){
    cout<<"swim\n";
   }
};
int main(){
    Fish f1;
    f1.fins=3;
    cout<<f1.fins<<endl;
    f1.swim();
    //we can not use this in case of public base class and protected mode of inheritance 
    // f1.eat();
    // f1.breathe(); //we can use them in class not in main function

}