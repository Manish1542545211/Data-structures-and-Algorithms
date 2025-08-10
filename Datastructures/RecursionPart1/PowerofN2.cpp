#include<iostream>
#include<vector>
using namespace std;
//time complexity O(log(n))
int Power(int X,int n){
    if(n==0){
        return 1;
    }
    int halfpower=Power(X,n/2);
    int halfpowersq=halfpower*halfpower;
    if(n%2!=0){
        //odd
        return X*halfpowersq;
    }
    return halfpowersq;

}

int main(){
    cout<<Power(2,10)<<endl;

}
 