#include<iostream>
using namespace std;
bool powerof2(int num){
    int bitmask=num-1;
    if(!(num&bitmask)){
        return true;
    }else{return false;}

}
int main(){
   int num;
  cout<<powerof2(8)<<endl;  


}