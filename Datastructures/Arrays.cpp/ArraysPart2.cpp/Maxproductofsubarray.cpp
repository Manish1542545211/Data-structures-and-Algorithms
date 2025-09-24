#include<iostream>
#include<limits.h>
using namespace std;
#include <vector>
#include<algorithm>
int maxProduct(vector<int>& nums) {
       int minmul=nums[0];
       int maxmul=nums[0];
       int ans=nums[0];
       for(int i=1;i<nums.size();i++){
          if(nums[i]<0){
            int temp=maxmul;
            maxmul=minmul;
            minmul=temp; 
          }

          maxmul=max(maxmul*nums[i],nums[i]);
          minmul=min(minmul*nums[i],nums[i]);
          ans=max(ans,maxmul);

       }
       return ans;
    
       
    }
int main(){
    vector<int>nums={-3,-5,-1,-4,5};
    cout<<maxProduct(nums)<<endl;
}