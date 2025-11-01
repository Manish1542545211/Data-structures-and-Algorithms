#include<iostream>
using namespace std;
void clearibits(int num,int i){
    int bitmask=(~0)<<i;
    num=num&bitmask;
    cout<<num<<endl;

}
int main(){
     clearibits(15,2);





}