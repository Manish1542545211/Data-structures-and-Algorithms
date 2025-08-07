#include<iostream>
#include<vector>
using namespace std;
int FirstOccur(vector<int> arr,int target,int i){
    if(i==arr.size()){
        return -1;

    }
    if(arr[i]==target){
        return i;

    }
 return FirstOccur(arr,target,i+1);

}

int main(){
   vector<int> arr={1,2,3,3,3,4};
   cout<<FirstOccur(arr,3,0)<<endl;



}