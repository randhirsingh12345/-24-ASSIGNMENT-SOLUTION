/*Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.*/
#include<iostream>
using namespace std;
int max(int ,int);
float max(float ,float );
int main()
{
    int a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;
    cout<<"maximum number is "<<max(a,b)<<endl;
    float x,y;
    cout<<"Enter two number : ";
    cin>>x>>y;
    cout<<"maximum number is "<<max(x,y);
    cout<<endl;
}
int max(int x, int y)
{
    if(x>y)
        return x;
    else
        return y;
}
float max(float x, float y)
{
    if(x>y)
        return x;
    else
        return y;
}
