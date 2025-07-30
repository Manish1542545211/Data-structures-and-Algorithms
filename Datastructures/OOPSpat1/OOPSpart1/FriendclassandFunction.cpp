#include<iostream>
#include<string>
using namespace std;
//friend class example 
class A{
   string secret="secret data";
   friend class B;
   friend void revealsecret(A &obj);//now revealsecret function has the access to the private things of class A
};
class B{//  B becomes  friend of A(means that B has access of the A not A has access of B)
    public:
    void Showsecret(A &object){
      cout<<object.secret<<endl;
    }

};
//freind function example
void revealsecret(A &obj){
     cout<<obj.secret<<endl;
}


int main(){
   A a1;
   B b1;
   b1.Showsecret(a1);//for friend class example
   revealsecret(a1);//for friend function example


}