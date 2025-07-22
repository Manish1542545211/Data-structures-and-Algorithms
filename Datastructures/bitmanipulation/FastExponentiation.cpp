#include<iostream>
using namespace std;
void FastExpo(int n,int x){
    int ans =1;
    while(n>0){
       int lastdigit=n&1;
       if(lastdigit){
        ans=ans*x;
       }
       x=x*x;
       n=n>>1;

    }
    cout<<ans<<endl;
}
int main(){
    FastExpo(3,4);
}