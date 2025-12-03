#include<iostream>
using namespace std;
#include<algorithm>
#include<climits>

void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

void countingsort(int arr[],int n){
       int freq[1000000]={0};
       int Mini=INT_MAX,Maxi=INT_MIN;
       for(int i=0;i<n;i++){
          Mini=min(Mini,arr[i]);
          Maxi=max(Maxi,arr[i]);
       }
       
       for(int i=Mini;i<=Maxi;i++){
        freq[arr[i]]++;       
       }
       for(int i=Mini,j=0;i<=Maxi;i++){

         while(freq[i]>0){
            arr[j++]=i;
            freq[i]--;


         }


       }





}








int main(){
    int arr[]={7,3,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    
    
 return 0;
}