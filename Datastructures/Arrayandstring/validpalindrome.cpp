#include<iostream>
#include<cstring>
#include<utility>
//time complexity is O(n)
using namespace std;
bool palindrome(char word[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
      if(word[start]!=word[end]){
        cout<<"not a palindrome\n"<<endl;
        return false;
      }
      start++;
      end--;
      cout<<"valid palindrome"<<endl;
      return true ;
     
    }

    

}
int main(){
   char word[]="madam";
   palindrome(word,strlen(word));

   




     
  return 0;   

}