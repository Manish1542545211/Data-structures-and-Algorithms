#include<iostream>
using namespace std;
void BinarySearch(int start,int end,int n,int arr[] ,int Key){
  
   while(start<=end){
     int Mid=(start+end)/2;
   if(arr[Mid]==Key){
    cout<<Mid<<endl;
    break;
   }
   else if(arr[Mid]>Key){
    end=Mid-1;
   }
   else{
    start=Mid+1;
   }
}
}



int main(){
   int array[]={2,4,6,8,10,12,14,16};
   int n=sizeof(array)/sizeof(array[0]);
   BinarySearch(0,n-1,n,array,14);

  
    return 0;

}