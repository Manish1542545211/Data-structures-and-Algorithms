#include<iostream>
using namespace std;

int main(){
    int array1[]={5,4,3,9,2};
    int n=sizeof(array1)/sizeof(array1[0]);
    int array2[n];
    int j=0;
    for(int i=n-1;i>=0;i++){
        array2[j]=array1[i];
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<array2[i]<<endl;
    } 
      
    return 0;


}