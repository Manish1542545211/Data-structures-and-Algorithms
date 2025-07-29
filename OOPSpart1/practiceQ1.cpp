#include<iostream>
using namespace std;
// Create a User class with properties : id (private), username(public) & password (private).
// Its id should be initialized in a parameterised constructor.
// It should have a Getter & Setter for password.
class user{
    int id;
    string password;
    public:
    string username;
    user(int id){
       this->id=id;
    }
    //setter
    void setpassword(string password){
       this-> password=password;
    }
    //getter
    string getpassword(){
       return password;
    }

};

int main(){  
     user user1(101);
     user1.username="Manish Kumar";
     user1.setpassword("abcd");
     cout<<"username:"<<user1.username<<endl;
     cout<<"password:"<<user1.getpassword()<<endl;


}