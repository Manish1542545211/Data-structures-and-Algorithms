#include<iostream>
#include<limits.h>
using namespace std;
//optimised version using Kadanes Algorithm
//Time Complexity is O(N)
void MaxsubarraysSum1(int arr[],int n){
    int Maxsum=INT_MIN;
    int cursum=0;
  for (int i=0;i<n;i++){
    cursum+=arr[i];
    Maxsum=max(Maxsum,cursum);
    if(cursum<0){
        cursum=0;
    }


  }
  cout<<"max sum of all the subarrays is ="<<cursum<<endl;

}


int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n=sizeof(arr)/sizeof(n);
    MaxsubarraysSum1(arr,n);
    
}