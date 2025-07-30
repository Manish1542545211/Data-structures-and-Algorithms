#include<iostream>
using namespace std;
class Print {
    public:
    void show(int x){
        cout<<"int:"<<x<<endl;
    }
    //funtion overloading (as we using same function with different paramenters multiple times)
    void show(string y){
        cout<<"string:"<<y<<endl;
    }
};
int main(){
    Print obj1;
    obj1.show(25);
    obj1.show("hello");

  return 0;
}