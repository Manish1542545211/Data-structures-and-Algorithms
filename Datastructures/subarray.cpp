#include <iostream>
using namespace std;
void Printsubarrays(int *array,int n){
  for (int start=0;start<n;start++){// this loop is for fixing the index(why we need to fix index? answer = becaue every time the starting point is same like 1,12,123 here starting is same and is 1)
    for(int end=start;end<n;end++){//this loop is for number of times sub array like 1, 12, 123,1234,12345(5 times)
        for(int i=start;i<=end;i++){//this loop is for the  printing 1 ,12,123,1234,12345
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