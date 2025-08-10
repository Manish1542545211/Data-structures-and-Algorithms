#include<iostream>
#include<vector>
using namespace std;
int tilingProblem(int n){//2xn
    //basecase
    if(n==0||n==1){
        return 1;
    }
    //vertical
    int ans1=tilingProblem(n-1);

    //Horizontal
    int ans2=tilingProblem(n-2);

    return ans1+ans2;
}

int main(){
    cout<<tilingProblem(5)<<endl;



}