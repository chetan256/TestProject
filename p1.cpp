#include<iostream>
using namespace std;
int div(int,int);
int main()
{
    cout<<div(2,1);
    cout<<div(3,2);
    cout<<div(4,4);
    cout<<div(8,2);
    return 0;
}
int div(int a,int b)
{
    return a/b;
}
