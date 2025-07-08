#include<iostream>
#include<limits.h>
using namespace std;
//selction sort 
void printarray(int array[5],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}
void Selectionsort(int array[5],int n){

     for(int i=0;i<n-1;i++){
        int minidx=i;
        for(int j=i+1;j<n;j++){
          if(array[j]<array[minidx]) {
            minidx=j;
          }
        }
        swap(array[i],array[minidx]);
     }
     printarray(array,n);
}

int main(){
    int array[5]={5,4,1,3,2};
    int n=sizeof(array)/sizeof(int);
    Selectionsort(array,n);



}