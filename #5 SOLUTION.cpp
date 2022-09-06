//Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
int check_Fibonacci_series(int );
int main()
{
    int n,res;
    cout<<"Enter a number : ";
    cin>>n;
    res=check_Fibonacci_series(n);
    if(res==1)
        cout<<n <<" is term in  Fibonacci series ";
    else
        cout<<n <<" is not term in  Fibonacci series ";
}
int check_Fibonacci_series(int  num)
{
    int a=0,b=1,c=0,i;
    for(i=1;i;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(num==c)
        {
            return 1;
            break;
        }
        if(c>num)
        {
            return 0;
            break;
        }

    }
}
