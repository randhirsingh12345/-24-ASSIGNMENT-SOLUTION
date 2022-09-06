//Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
void swap(int & , int &);
int main()
{
    int a,b;
    cout<<"Enter two number (x,y): ";
    cin>>a>>b;
    swap(a,b);

}
void swap(int &x,int &y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<" x = "<<x<<endl;
    cout<<" y = "<<y;

}
