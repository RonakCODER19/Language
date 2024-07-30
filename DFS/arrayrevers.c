/*
    take one dimation array like a[]
    store and print revers array a[]
    copy a[] in to b[]
    print array b[]
*/

#include<stdio.h>

void main()
{
    int row,col;
     int a[5],b[5];

        for(row=0; row<5; row++)
        {
            printf("a[%d]:",row);
            scanf("%d",&a[row]); //store value in array a[]

        }printf("\n");

        for(row=4; row>=0; row--)
        {
            printf("a[%d]:%d \n",row,a[row]); // print revers array a[]
            b[row]=a[row]; // copy array a[] in to array b[]

        }printf("\n");
        
        for(row=0; row<5; row++)
        {
            printf("b[%d]:%d \n",row,b[row]); // print array b[]
        }

}