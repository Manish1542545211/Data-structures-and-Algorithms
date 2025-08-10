#include<iostream>
#include<vector>
#include<string>
using namespace std;
void Removeduplicate(string str,string ans,int i,int map[26]){
    char ch=str[i];
    int mapidx=(int)(ch-'a');//'a'->0 and 'b'->1 index;
    if(i==str.size()){
        cout<<ans;
        return ;
    }
    if(map[mapidx]==false){
        map[mapidx]=true;
        Removeduplicate(str,ans+str[i],i+1,map);
    }else{Removeduplicate(str,ans,i+1,map);
    }

     
  

}

int main(){
    string str="appnnacollege";
    string ans="";
    int map[26]={false};
    Removeduplicate(str,ans,0,map);
   


}