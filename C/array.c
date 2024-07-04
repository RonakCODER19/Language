#include<stdio.h>
#include<conio.h>

void main()
{
    int a[3][3],i,j;

    clrscr();

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");

    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==0 && j==0 || i==1 && j==0 || i==2 && j==0)
            {
                printf("|");
            }
            
            printf("%d",a[i][j]);

            if(i==0 && j==2 || i==1 && j==2 || i==2 && j==2)
            {
                printf("|");
            }
        }
        printf("\n");
    }
getch();
}