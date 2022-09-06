//Write functions using function overloading to add two numbers having different data types.
#include<iostream>
using namespace std;
int sum(int a ,int b);
float sum(float a , float b);
int main()
{
    int a ,b;
    cout<<"Enter two number : ";
    cin>>a>>b;
    cout<<"Sum of "<< a <<" and "<< b <<" are "<<sum(a,b)<<endl;
    float x,y;
    cout<<"Enter two number : ";
    cin>>x>>y;
    cout<<"Sum of "<< x <<" and "<< y <<" are "<<sum(x,y)<<endl;
    return 0;

}
int sum(int a ,int b)
{
    return a+b;
}
float sum(float a , float b)
{
    return a+b;
}
