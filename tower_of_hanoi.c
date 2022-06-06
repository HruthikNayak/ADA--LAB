#include<stdio.h>
void tower_hanoi(int n,char x, char y, char z)
{
    if(n>0)
    {

        tower_hanoi(n-1,x,z,y);
        printf("\n %c to %c",x,y);
        tower_hanoi(n-1,z,y,x);
    }
}
int main()
{

    int n;
    printf("Enter the number of discs");
    scanf("%d",&n);
    tower_hanoi(n,'A','B','C');
}
