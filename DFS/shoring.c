#include<stdio.h>

void main()
{
     int list[20],row,num,tmp,pot;

    printf("Enter Any Number :");
    scanf("%d",&num);

     for(row=1; row<=num; row++)
     {
            printf("list[%d]:",row);
            scanf("%d",&list[row]);
     }

     for(row=1; row<=num; row++)
     {
            pot=row-1; // 0 1 2 Position of row are stored in pot variable
            tmp=list[row]; // value of a list array are stord in tmp variable
           
     }
}