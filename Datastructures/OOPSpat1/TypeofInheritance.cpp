#include<iostream>
using namespace std;
class Animal{
public:
    void eat(){
        cout<<"eat\n";

    }
    void breathe(){
        cout<<"breathing\n";
    }
};
class Mammal:public Animal{
    public:
    string bloodtype;
    Mammal(){
     bloodtype="warm"; 
    }
}; 
class Dog :public Mammal{
    public:
    void tailwag(){
        cout<<"a Dog wags its tail\n";
    }
};

int main(){
    Dog d1;
    d1.eat();
    d1.breathe();
    d1.tailwag();
    cout<<d1.bloodtype<<endl;
    

}