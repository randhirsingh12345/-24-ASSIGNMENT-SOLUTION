//Define a function to print Pascal Triangle up to N lines
#include<iostream>
using namespace  std;
int com(int n, int r);
int fact(int n);
int main()
{
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            int k=0;
            if(j==0)
                while(k++ <= (n/2-i+1))
                printf(" ");
            printf("%d ",com(i,j));
        }
        printf("\n");
    }
    return 0;
}
int com(int n, int r)
{
    int comb=fact(n)/(fact(r)*fact(n-r));
    return comb;
}
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
