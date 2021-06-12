#include<stdio.h>
#include<malloc.h>
#include<process.h>


int main()
{

    int *p,sum=0,i,n;

    printf("enter a no for your array");
    scanf("%d",&n);

    p=(int *)malloc(n*sizeof(int));

    if(p==NULL)
    {


        printf("insufficient memory");
        exit(1);

    }

    for(i=0;i<n;i++)
    {
        printf("enter a no");
        scanf("%d",p+i);

    }

    for(i=0;i<n;i++)
    {
        printf("\n %d",*(p+i));
    }


    free(p);
    _getch();
}
