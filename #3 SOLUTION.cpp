//Define a function to calculate x raised to the power y.
#include<iostream>
#include<math.h>

using namespace std;
int calculate_x_raised_to_the_power_y(int ,int);
int main()
{
    int x,y;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter power(y) to be calculate : ";
    cin>>y;
    int sqrt=calculate_x_raised_to_the_power_y(x,y);
    cout<<x<<" raised to the power "<<y<<" is "<<sqrt<<endl;s
   cout<<"pow("<<x<<","<<y<<")="<<sqrt;
    return 0;
}
int calculate_x_raised_to_the_power_y(int a ,int b)
{
    int i,sqrt=1;
    for(i=1;i<=b;i++)
    {
        sqrt=sqrt*a;
    }
    return sqrt;
}
