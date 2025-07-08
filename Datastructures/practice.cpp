#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;
void print(int arr[],int n){
    for (int i=0;i<n;i++){
    cout<<arr[i]<<",";
    }
}

void countingsort(int arr[],int n){
     int frequancy[10000]={0};
     int Max=INT_MIN,Min=INT_MAX;
     for(int i=0;i<n;i++){
        Max=max(Max,arr[i]);
        Min=min(Min,arr[i]);
     }
     for(int i=0;i<n;i++){
        frequancy[arr[i]]++;
     }

     for(int i=Min,j=0;i<Max;i++){
         while(frequancy>0){
             arr[j++]=i;
             frequancy[i]--;

         }

     }
     print(arr,n);


}




int main(){
    int arr[]={3,6,2,1,8,7,4,5,3,1};
    int n=sizeof(arr)/sizeof(int);
    countingsort(arr,n);

    



}