#include<iostream>
using namespace std;
void changeA(int *ptr){//pass by reference 
    *ptr=20;
    cout<<*ptr<<endl;
}
int main(){
    int a=10;
    changeA(&a);
    cout<<a<<"\n";
    return 0;
}