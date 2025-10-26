#include<iostream>
#include<string>
using namespace std;
    
int LinearSearch(int arr[],int n,int Key){
    for(int i=0;i<n;i++){
        if(arr[i]==Key){
            return i;
        }

    }
    return -1;
}


int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int Key=4;
    cout<<LinearSearch(arr, n, Key)<<endl;


}