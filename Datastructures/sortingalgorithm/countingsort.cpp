#include<iostream>
#include<limits.h>
using namespace std;
//countsort algorithm for the sort range
void print(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
void countsort(int arr[],int n){
    int freq[100000]={0};//range
   int minval=INT_MAX,maxval=INT_MIN;
   //loop for finding the min and max value 
   for(int i=0;i<n;i++){
       minval=min(minval,arr[i]);
       maxval=max(maxval,arr[i]);
   }
   //1st step
   for(int i=0;i<n;i++){
    freq[arr[i]]++;
   }
   //2nd step - O(range)=max-min 
   for(int i=minval,j=0;i<=maxval;i++){
       while(freq[i]>0){
        arr[j++]=i;
        freq[i]--;

       }
   }

     
   print(arr,n);


}



int main (){
   int arr[8]={1,4,1,3,2,4,3,7};
   countsort(arr,8);
   return 0;

}