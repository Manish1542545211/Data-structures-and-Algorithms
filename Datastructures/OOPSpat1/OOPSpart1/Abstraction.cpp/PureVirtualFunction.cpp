#include<iostream>
#include<string>
using namespace std;
//abstract class
class Shape{
   public:
   virtual void Draw()=0;//pure virtual functionor the abstract function

};
class Circle :public Shape{
    public:
    void Draw(){
        cout<<"draw circle\n";
    }

};
class square :public Shape{
    public:
    void Draw(){
        cout<<"draw square";
    }

};


int main(){
   Circle c1;
   c1.Draw();
   square s1;
   s1.Draw();
  


}
