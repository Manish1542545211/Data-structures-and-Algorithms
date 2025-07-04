#include<iostream>
#include<limits.h>
using namespace std;
#include <vector>
#include<algorithm>
bool containsDuplicate(vector<int>&nums){
  sort(nums.begin(),nums.end());
  for(int i=1;i<nums.size();i++){
    if(nums[i-1]==nums[i]){
      return true;}
    }return false;
  }


int main(){
  vector<int>nums={1,2,3,4,5,6,5,4,4,4,5};
  cout<<containsDuplicate(nums)<<endl;


}