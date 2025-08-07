#include<iostream>
#include<vector>
using namespace std;
//time complexity of O(n);

int Power(int X,int n,int i){
   if(i==n){
      return 1;
   }
   int power=X*Power(X,n,i+1);

   return power;

 }



int main(){
   cout<<Power(5,2,0)<<endl;
    
    


    



  return 0;   

}