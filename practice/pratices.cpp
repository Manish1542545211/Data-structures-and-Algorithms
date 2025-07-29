#include<iostream>
#include<cstring>
#include <string>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;
class car{
public:
string name;
string color;

car(string name,string color){
  this->name=name;
  this->color=color;
}
//custom constructor for the second object c2
car(car &origional){
  cout<<"copying origional to new"<<endl;
  name=origional.name;
  color=origional.color;
}

};
   

int main(){
    car  c1("fortuner","white");
    car c2(c1);//copy constructor make for this c2 
    cout<<c2.name<<endl;
    cout<<c2.color<<endl;



  return 0;   

}