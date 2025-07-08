#include<iostream>
#include<limits.h>
using namespace std;
//bubble sort algorithm
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    
    }
}
void bubblesort(int arr[],int n){
    bool isswap=false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap=true;
            }
        }
        if(isswap==false){
            return;
        }
    }
    print(arr,n); 
}
int main(){
     int array[]={1,3,2,4,5};
     int n=sizeof(array)/sizeof(int);
     bubblesort(array,5);
     return 0;
}