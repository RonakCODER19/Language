#include<stdio.h>

int main()
{
    int a[5],b[2],n,i;

    for(i=0; i<5; i++)
    {
        printf("A[%d]:",i);
        scanf("%d",&a[i]); // scanf all values and put in to array
    }
    
    printf("enter to change value of array :");
    scanf("%d",&n);  //  select array index change value of selected array
    
    printf("enter to put value in to array :");
    scanf("%d",&b[1]); // take value and put in to a selected array index
    
    for(i=0; i<5; i++)
    {
        if(a[n])
        {        
            b[0]=a[n];  // update  selected array value 
            a[n]=b[1];  
        }
    }

    for(i=0; i<5; i++)
    {
        printf("\na[%d]:[%d]",i,a[i]); // print updated and all array values
    }    
}