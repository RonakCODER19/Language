/*
    123
    123
    123
*/
#include<stdio.h>

void main()
{

    int i,n,j;

    printf("Enter Number :");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}