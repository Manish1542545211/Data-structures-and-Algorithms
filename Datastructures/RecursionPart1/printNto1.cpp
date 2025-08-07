#include<iostream>
using namespace std;
//print number from n to 1
void print(int n){
  if (n==0){
    return ;
  }
  cout<<n<<endl;
  print(n-1);
}

int main(){
     print(5);
     return 0;

}