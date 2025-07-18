#include<iostream>
#include<string>
#include<cstring>
using namespace std;
bool isanagram(string str1,string str2){
     if(str1.length()!=str2.length()){
        cout<<"not a valid anagram";
         return false;
     }
     int count[26]={0};
     for(int i=0;i<str1.length();i++){
         int idx=str1[i]-'a';
         count[idx]++;
     }

     //traverse on the str2 with help of count means comparing no of elemnt in str1 to str2 is all are same
     for(int i=0;i<str2.length();i++){
        int idx=str2[2]-'a';
        if(count==0){
            cout<<"not a panagaram"<<endl;
            return false;
        }
        count[idx]--;

     }
      cout<<"panagram"<<endl;
     return true;




}


int main(){
    string str1="anagram";
    string str2="nagaram";
    isanagram(str1,str2);



}
