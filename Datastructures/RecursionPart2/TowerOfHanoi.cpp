#include<iostream>
using namespace std;
void TowerOfHanoi(int n,char source,char dest,char helper){//dest=destination
    if(n==0){
        return;
    }
    TowerOfHanoi(n-1,source,helper,dest); 
    cout<<"Move disk "<<n<<" from rod "<<source<<" to rod "<<dest<<" using rod "<<helper<<endl;
    TowerOfHanoi(n-1,source,helper,dest);

}
int main(){
    int n=1;
    TowerOfHanoi(n,'A','C','B');
}