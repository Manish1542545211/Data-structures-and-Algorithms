#include<iostream>
using namespace std;
class complex{
    int real;
    int  img;
    public:
    complex(int r,int i){
    real=r;
    img=i;

    }
    void ShowNum(){
        cout<<real<<"+"<<img<<"i\n";
    }
    //operator overloading
    complex operator +(complex &c2){
        int resreal=this->real+c2.real;
        int resimg=this->img+c2.img;
        complex c3(resreal,resimg);
        return c3;
    }

   


};
int main(){
    complex c1(1,2);
    complex c2(3,4);
    c1.ShowNum();
    c2.ShowNum();
    complex c3=c1+c2;
    c3.ShowNum();
    return 0;


}