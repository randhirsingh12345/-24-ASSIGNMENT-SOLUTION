
//Write a function using the default argument that is able to add 2 or 3 number.
#include<iostream>
using namespace std;
int add(int, int, int=0 );
int main()
{
    int a,b;
    cout<<"Enter two number (a and b) : ";
    cin>>a>>b;
    cout<<"sum of "<< a << " and "<< b<<" = "<<add(a,b)<<endl;
    int c;
    cout<<"Enter three number (a and b) : ";
    cin>>a>>b>>c;
    cout<<"sum of "<<a << " and "<< b << " and "<<c <<" = "<<add(a,b,c);
    return 0;


}
int add(int x, int y,int z)
{
    return x+y+z;
}
