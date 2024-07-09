#include<stdio.h>

void main()
{
    int a[50][50],i,j,c=0,n=0,row,col;

    printf("enter row :");
    scanf("%d",&row);

    printf("Enter col :");
    scanf("%d",&col);

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);

            if(a[i][j]==0)
            {
                c++;
            }
            else
            n++;
        }
        printf("\n");
    }

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
             if(i==0 && j==0 || i==1 && j==0 || i==2 && j==0)
            {
                printf("|");
            }
            
            printf("%d",a[i][j]);

            if(i==0 && j<col)
            {
                printf("|");
            }
        }printf("\n");
    }
    printf("zero is :%d\n",c);
    printf("non zero is %d\n",n);
    
        if(c>n)
        {
            printf("its spass metrix");
        }
        
}