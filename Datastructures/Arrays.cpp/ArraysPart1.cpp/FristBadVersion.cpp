// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int array[]={10,20,30,40,50,60,70,80,90,100};
    int n=sizeof(array)/sizeof(array[0]);
    int low=0;
    int high=n-1;
    int Mid;
    int Key=50;
    while(low<=high){
        Mid=low+(high-low)/2;
        if(array[Mid]==Key){
            cout<<Mid<<endl;
            break;
        }
        else if(array[Mid]<Key){
            low=Mid+1;
        }
        else{
            high=Mid-1;
        }
        
    }
 

    return 0;
}
