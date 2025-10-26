#include<iostream>
#include<string>
using namespace std;
void func(int nums[],int n){
  nums[0]=2;
  cout<<nums[0]<<endl;
  //pass by refrence also we have to send the n to the function 
  //because if we try to find inside the function it is wrong becasue  nums is pointer and pointer size is 8 bit so we have to find outside the function n than gave it to the function

}

int main(){
  int arr[]={1,2,3,4,5};
  int n=sizeof(arr)/sizeof(int);
  cout<<arr[0]<<endl;
  func(arr,n);
  cout<<arr[0]<<endl;

  


  return 0;


}