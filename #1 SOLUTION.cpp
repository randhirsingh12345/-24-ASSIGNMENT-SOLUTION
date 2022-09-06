//Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
int check_prime(int );
int main()
{
    int n,res;
    cout<<"Enter a number : ";
    cin>>n;
    res=check_prime(n);
    if(res==1)
        cout<<"Number is prime" ;
    else
     cout<<"Number is not prime" ;

        return 0;
}

int check_prime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        break;
    }
    if(n==i)
        return 1;
    else
        return 0;
}
