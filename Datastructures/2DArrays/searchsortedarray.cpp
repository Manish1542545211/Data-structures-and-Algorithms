#include<iostream>
using namespace std;
//time complexity O(n+m)
// search the sorted array 
bool search(int mat[][4],int n,int m,int key){
    int i=0,j=m-1;
    while(i<n &&j>=0){
        if(mat[i][j]==key){
           cout<<"found at cell("<<i<<","<<j<<")"; 
           return true;
        }else if(mat[i][j]>key){
            j--;
            //left
        }
        else if(mat[i][j]<key){
             //down
             i++;
        }

    }
    cout<<"key not found";
    return false;


}
int main(){
   int matrix[4][4]={ {10,20,30,40},
                      {15,25,35,45} ,
                      {27,29,37,48},
                      {32,33,39,50}};
    search(matrix,4,4,33);

    

}