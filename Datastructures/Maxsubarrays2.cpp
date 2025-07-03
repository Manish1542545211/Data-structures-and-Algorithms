#include<iostream>
#include<limits.h>
using namespace std;
//Brute force approach;(optimised)
void maxSubarraySum1(int arr[],int n){
     int maxSum=INT_MIN;
    for(int start=0;start<n;start++){
        int cursum=0;
        for(int end=start;end<n;end++){
            cursum =cursum+arr[end];
            cout<<cursum<<" ";
            maxSum=max(maxSum,cursum);
        }
        cout<<endl;
    }
    cout<<"maximum subarray sum="<<maxSum<<endl;
    
}
int main(){
  int arr[]={2,-3,6,-5,4,2};
  int n=sizeof(arr)/sizeof(int);
  maxSubarraySum1(arr,n);



return 0;
}