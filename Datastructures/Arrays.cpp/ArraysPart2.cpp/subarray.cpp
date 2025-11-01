#include <iostream>
using namespace std;
void Printsubarrays(int *array,int n){
  //actual reason the outer loop is for the complete section (1 ,12,123 1234 ,12345) this is one section this type of we have 5 section so outer loop is for this and inner loop is for the blocks that are (1),(12), (123) ,(1234) ,(12345) this are 5 blocks and the inner inner loop is for the (1),(1)(2) (1)(2)(3), (1)(2)(3)(4) ,(1)(2)(3)(4)(5)
  for (int start=0;start<n;start++){// 
    for(int end=start;end<n;end++){
        for(int i=start;i<=end;i++){//
            cout<<array[i];
        }
        cout<<",";
    }
    cout<<endl;
  }
}
int main(){
    int array[5]={1,2,3,4,5};
    int n=5;
    Printsubarrays(array,n);

}