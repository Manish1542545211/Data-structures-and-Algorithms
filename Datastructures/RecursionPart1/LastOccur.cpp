#include<iostream>
#include<vector>
using namespace std;
int LastOccur(vector<int>arr,int target,int i){
    if(i==arr.size()){ //bilkul last me value return 
        return -1;
    }
    int idx=LastOccur(arr,target,i+1);//last tak leke ja raha he
    if(idx==-1&&arr[i]==target){
        return i;
    }

    return idx;
}


int main(){
  vector<int>arr={1,2,3,3,3,4};
  cout<<LastOccur(arr,3,0)<<endl;



}