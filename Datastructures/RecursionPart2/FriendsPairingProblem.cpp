#include<iostream>
using namespace std;
int FriendsPairing(int n){
    //base case
   if(n==1||n==2){
    return n;
   }

   //single
    int singleout=FriendsPairing(n-1);
    //pairup
    int pairup=(n-1)*FriendsPairing(n-2);

    return singleout+pairup;
   


}

int main(){
    cout<<FriendsPairing(4)<<endl;



}