#include<stdio.h>
#include<time.h>
#include<math.h>
int linearSearch(int [],int int);
void delay(unsigned int);
void main()
{

    int kay,index,n=500;
    clock_t t;
    for(n=0;n<5000;n=n+500)
    {

        int list[n];
         for(int i=0;i<n;i++)
            list[i]=rand();
         key=-1;
         t=clock();
         index=linearSearch(list,key,n);
         t=clock()-t;
         if(index>=0)

        printf("\n Key was found at index=%d",index);
        else
            printf("\n Key element not found \n");
        double time_taken=((double)t)/CLOCKS_PER_SEC;
        printf("time taken for Execution n=%d: %f",n,time_taken);
    }
    return 0;
}
int linearSearch(int a[], int key,int s)
{

    if(s<0)
        return -1;
    if(key==a[s])
        return s;
    delay(1);
    return linearSearch(a,key,s-1);
}
void delay(unsigned int msexconds)
{

    clock_t goal=mseconds+clock();
    while(goal>clock());
}
