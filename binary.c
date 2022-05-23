#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int ar[10];
    time_t st,ed;
    int beg=0, end=9;
    int mid ;
    int ele, flag=0;
    for(int i=0; i<10; i++)
    {

        scanf("%d",&ar[i]);
    }
    for(int k=0;k<10;k++)
    {

        printf("%d \t",ar[k]);
    }
    st=time(NULL);
    printf("ENTER THE ELEMENT TO SEARCH\n");
    scanf("%d",&ele);
    while(beg<=end)
    {
        mid= (beg+end)/2 ;

        if(ar[mid]==ele)
        {

            printf("element found\n");
        flag=1;
        break;
        }
    }
    if(ele>ar[mid])
    {
        beg=mid +1;
    }
    if(ele<ar[mid])
    {
        end=mid+1;
    }
    if(flag==0)
    {

        printf("element nt found \n");
    }
    ed=time(NULL);
    printf("Time taken for execution = %f", difftime(ed,st));
    return 0;
}
