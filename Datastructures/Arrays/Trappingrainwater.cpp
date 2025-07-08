#include<iostream>
#include<limits.h>
using namespace std;
//trapping rainwater leetcode problem
int trap(int heights[],int n){
    int leftmax[20000],rightmax[20000];
    leftmax[0]=heights[0];
    rightmax[n-1]=heights[n-1];
    for(int i=1;i<n;i++){
        leftmax[i]=max(leftmax[i-1],heights[i-1]);  
    }
    for(int i=n-2;i>+0;i--){
        rightmax[i]=max(rightmax[i+1],heights[i+1]);  
    }
    int watertrapped=0;
    for(int i=0;i<n;i++){
        int currWater=min(leftmax[i],rightmax[i])-heights[i];
        if(currWater>0){
            watertrapped+=currWater;
        }
    }
   cout<<"water trapped ="<<watertrapped<<endl;
    return watertrapped;
}
int main(){
   int heights[7]={4,2,0,6,3,2,5};
   int n=sizeof(heights)/sizeof(int);
   trap(heights,n);

} 
//time complexity is O(n)