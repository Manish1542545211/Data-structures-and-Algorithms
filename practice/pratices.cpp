#include<iostream>
#include<cstring>
#include <string>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;
void search(int arr[],int i,int n,int Key){
 if(i==n){
  return ;
 }
 if(arr[i]==Key){
  cout<<i<<",";
 }
 return search(arr,i+1,n,2);
}




int main(){
  int arr[]={3,2,4,5,6,2,7,2,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  search(arr,0,n,2);

  
  return 0;   

}