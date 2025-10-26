#include<iostream>
#include<string>
using namespace std;

int main(){
  int array[5]={5,4,3,9,2};
 int Max=array[0];
 int Min=array[0];
 int n=sizeof(array)/sizeof(array[0]);
 for(int i=0;i<n;i++){
    if(array[i]>Max){
      Max=array[i];
      
    }
    if(array[i]<Min){
      Min=array[i];
    }
    
 }
 cout<<Max<<endl;
 cout<<Min<<endl;



 

  return 0;

  }