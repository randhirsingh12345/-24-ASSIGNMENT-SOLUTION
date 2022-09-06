//Define overloaded functions to calculate area of circle, area of rectangle and area of triangle.
#include<iostream>
using namespace std;
float area(int);
int area(int , int );
float area(float ,float);
int main()
{
    int r;
    cout<<"Enter radius of circle : ";
    cin>>r;
    cout<<"Area of circle is " << area(r)<<endl;
    int l,b;
    cout<<"Enter length and breath of rectangle : " ;
    cin>>l>>b;
    cout<<"Area of rectangle  is " << area(l,b)<<endl;
    float height,base;
    cout<<"Enter height and  base of triangle : " ;
    cin>>height>>base;
    cout<<"Area of triangle  is " <<area(height ,base)<<endl;
    return 0;
}
float area(int r)
{
    return 3.14*r*r;
}
int area(int l, int b)
{
    return l*b;
}
float area(float height ,float base)
{

    return (height*base)/2;
}
