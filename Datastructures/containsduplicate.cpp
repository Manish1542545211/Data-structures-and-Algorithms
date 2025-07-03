#include<iostream>
#include<limits.h>
using namespace std;
bool containsduplicate(int nums[],int n){
     
     for(int i=1;i<n;i++){
       if(nums[i-1]==nums[i]){
        return true;
       }
       
        
     }
     return false;
}
int main(){
    int nums[6]={1,2,3,4,};
    int n=sizeof(nums)/sizeof(int);
    cout<<containsduplicate(nums,n)<<endl;




}