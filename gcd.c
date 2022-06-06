#include<stdio.h>
int gcd(int, int);
int main()
{

    int a,b;
    printf("enter the values of a & b \n");
    scanf("%d %d", &a,&b);
    printf("|the GCD of %d and %d is %d", a,b,abs(gcd(a,b)));
    return 0;
}
int gcd(int x, int y)
{

    if(y!=0)
    {

         return gcd(y,x%y);
    }
    else
    {
        return x
    }
}
