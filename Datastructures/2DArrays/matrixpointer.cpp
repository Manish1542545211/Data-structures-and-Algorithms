#include <iostream>
using namespace std;
void func(int mat[][4], int n, int m)
{
    cout<<"oth value"<<*mat<<endl;
    cout<<"oth value"<<mat<<endl;

    cout<<"1th value"<<*(*(mat+1)+1)<<endl;
    
}
void func2(int (*mat)[4], int n, int m)
{
}

int main()
{
    int mat[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 7}, {1, 2, 4, 5}, {1, 2, 3, 4}};
    // cout<<mat<<endl;//point towards the 1 rows
    // cout<<mat+1<<endl;//point towards the 2nd rows
    // cout<<mat<<"="<<&mat[0][0]<<endl;
    // cout<<mat+1<<"="<<&mat[1][0]<<endl;
    func(mat, 4, 4);
}
    