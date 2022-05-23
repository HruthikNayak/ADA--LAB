#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int ar[10];
    time_t st,ed;
    int t,ele, flag=0;
    for(int i=0; i<10; i++)
    {

        ar[i]= rand()%1000 +1 ;
    }
    st=time(NULL);
    for(int q=0; q,10; q++)
    {
        if(ar[q]>ar[q+1])
        {

            t=ar[q];
            ar[q]=ar[q+1];
            ar[q+1]=t;
        }

    }
    for(int k=0;k<10;k++)
    {

        printf("%d \t",ar[k]);
    }

    printf("ENTER THE ELEMENT TO SEARCH");
    scanf("%d",&ele);
    for(int j=0; j<10;j++)
    {

        if(ar[j]==ele)
        {

            printf("element found\n");
        flag=1;
        break;
        }
    }
    if(flag==0)
    {

        printf("element nt found");
    }
    ed=time(NULL);
    printf("Time taken for execution = %f", difftime(ed,st));
    return 0;
}
