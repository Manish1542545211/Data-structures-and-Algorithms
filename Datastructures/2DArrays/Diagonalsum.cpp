#include<iostream>
#include<limits.h>
using namespace std;
//Diagonal sum 
//also can handle the edge cases like odd matrix
void diagonalsum(int arr[][4],int n){  
     int sum=0;
     //time complexity is O(n^2)
     for(int i=0;i<n;i++){//rows
         for(int j=0;j<n;j++){
            if(i==j){
                sum+=arr[i][j];
            }else if(j==n-i-1){
                sum+=arr[i][j];
            }
         }


     }
     cout<<"sum is "<<sum<<endl;

}


int main(){
    int arr[4][4]={{1,2,3,4},
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16}};
    
    diagonalsum(arr,4);
                     






}
