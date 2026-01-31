#include <iostream>
#include <vector>
#include<cstring>
#include<string>
using namespace std;
void Fastexpo(int x,int n){
    int ans=1;
    while(n>0){
        int lastbit=n&1;
        if(lastbit){
            ans=ans*x;
        }
        x=x*x;
        n=n>>1;
    
    }
    cout<<ans<<endl;
}





int main() {
    Fastexpo(3,5);
   
    


 
    return 0;
}
