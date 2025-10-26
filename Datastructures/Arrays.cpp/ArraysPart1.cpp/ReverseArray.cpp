#include<iostream>
using namespace std;
int main(){
       //Simple O(n) Time complexity with extra space
//     int array1[]={5,4,3,9,2};
//     int n=sizeof(array1)/sizeof(array1[0]);
//     int array2[n];
//     int j=0;
//    for(int i=0;i<n;i++){
//     array2[i]=array1[n-1-i];
//    }
//     for(int i=0;i<n;i++){
//         cout<<array2[i]<<endl;
//     }
//     for(int i=0;i<n;i++){
//         array1[i]=array2[i];

//     }
//     for(int i=0;i<n;i++){
//         cout<<array1[i]<<endl;
//     }

 // Two Pointer approach(Without Extra Space)
    int array[]={5,4,3,9,2};
    int n=sizeof(array)/sizeof(array[0]);
    int start=0,end=n-1;
    while(start<end){
        int temp=array[start];
        array[start]=array[end];
        array[end]=temp;
        start++;
        end--;
    }
    //slight improvement
//     for (int start = 0, end = n - 1; start < end; start++, end--) {
//     int temp = array[start];
//     array[start] = array[end];
//     array[end] = temp;
// }

 
    for (int value:array){
        cout<<value<<" ";
    }

    


    return 0;
}