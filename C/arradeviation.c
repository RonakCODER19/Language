#include<stdio.h>

void main()
{
    int row,col,a[2][2];
        int r,c;

    
        for(row=0; row<2; row++)
        {
            for(col=0; col<2; col++)
            {
                printf("a[%d][%d]:",row,col);
                scanf("%d",&a[row][col]);
            }
            printf("\n");
        }

    printf("enter row to not print in array:");
    scanf("%d",&r);
    printf("enter col to not print array :");
    scanf("%d",&c);

        for(row=0; row<2; row++)
        {
            for(col=0; col<2; col++)
            {
                    if(row==r&&col==c)
                    {
                        printf("  ");
                    }
                    else
                     printf("%d ",a[row][col]);
            }
            printf("\n");
        }

}