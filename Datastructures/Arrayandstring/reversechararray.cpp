#include<iostream>
#include<cstring>
#include<utility>
using namespace std;
void reversechararray(char word[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
      swap(word[start++],word[end--]);
     
    }
    



}
int main(){
   char word[]="code";
   reversechararray(word,strlen(word));
   cout<<word<<endl;
   




     
  return 0;   

}