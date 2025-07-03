#include<iostream>
#include<limits.h>
using namespace std;
bool containsduplicate(int nums[],int n){
     int count=0;
     
     for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if(nums[i]==nums[j] ){
                count++;
        
                
            }
            if(count>=2){
                return true;
            }
        }
        


     }
     return false;
}
int main(){
    int nums[6]={1,2,3,4,5,5};
    int n=sizeof(nums)/sizeof(int);
    cout<<containsduplicate(nums,n)<<endl;




}