#include<iostream>
using namespace std;
void updateithbit(int num,int i,int value){
     num=num&~(1<<i);//cleath the ith bit and set it to 0 
     num=num|(value<<i);
     cout<<num<<endl;

}
int main(){
   
   updateithbit(7,2,0); 
   updateithbit(7,3,1);
   system("pause");
   return 0;



}