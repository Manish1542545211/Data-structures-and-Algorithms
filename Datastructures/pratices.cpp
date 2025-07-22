#include<iostream>
#include<cstring>
#include <string>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;
//creating 2d dyanamic array 
void oddoreven(int num){
  if((num&1)==0){
    cout<<"number is even";
  }else{cout<<"number is odd";}
}
int ithbit(int num,int i){
  int bitmask=1<<i;
  if(!(num&bitmask)){
    return 0;
  }else {return 1;}
}
int setithbit(int num,int i){
   int bitmask=i<<i;
    return (num|bitmask);
}
int clearithbit(int num,int i){
  int bitmask=~(1<<i);
  return num&bitmask;
}
bool powerof2(int num , int i){
    int bitmask=(num&num-1)
}
int main(){
//2d vector array and 2d dynamic array 
  int num=6;
  cout<<clearithbit(num,1);



  return 0;   

}