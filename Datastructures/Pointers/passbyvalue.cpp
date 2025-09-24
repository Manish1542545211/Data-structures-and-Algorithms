#include<iostream>
using namespace std;
void changeA(int a){//this is example  of Pass by value
    a=20;
    cout<<a<<"\n";
}
int main(){
    int a=10;
    changeA(a);
    cout<<a<<"\n";

}