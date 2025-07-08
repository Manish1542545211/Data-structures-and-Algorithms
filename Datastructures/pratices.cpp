#include<iostream>
using namespace std;
int main(){
    int matrix[4][4]={{1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
    
    cout<<*(*(matrix+2)+2)<<endl;

    
}