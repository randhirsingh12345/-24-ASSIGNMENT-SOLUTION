#include<iostream>
#include<windows.h>
using namespace std;
int Higest_digits(int n);
int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    //system("cls");
    int res=Higest_digits(x);
    cout<<"Higest digits in a given number is  "<< res;
    return 0;
}
int Higest_digits(int n)
{
    int max=0;
    /*while(n)
    {
        if(max<n%10)
            max=n%10;
        n=n/10;
    }*/
    while(n)
    {
       int r=n%10;
        if(max<r)
            max=r;
        n=n/10;
    }
    return max;
}
