#include<limits.h>
#include<iostream>
#include<algorithm>
using namespace std;
//spiral matrix
void spiralmatrix(int mat[][4],int n,int m){
    int srow=0,scol=0;
    int erow=n-1,ecol=m-1;
    while(srow<=erow&&scol<=ecol){
    //top
    for(int j=scol;j<=ecol;j++){
       cout<<mat[srow][j]<<" ";
    }
    //right
    for(int i=srow+1;i<=erow;i++){

        cout<<mat[i][ecol]<<" ";

    }
    //bottom
    for(int j=ecol-1;j>=scol;j--){
        if(srow==erow){break;}//special corner case exist
       cout<<mat[erow][j]<<" ";
    }
    //left
    for(int i=erow-1;i>=srow+1;i--){
        if(scol==ecol){
            break;
        }//special corner case
      cout<<mat[i][scol]<<" ";              

    }
    srow++;scol++;
    erow--;ecol--;

    

}
    


}
int main(){
    int mat[3][4]={{1,2,3,4},
                       {5,6,7,8},
                       {9,10,11,12},
                       };
    spiralmatrix(mat,3,4);

}
