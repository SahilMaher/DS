#include<stdio.h>

void main()
{
    int a[3],b[3],c[6],i,j=3;
    printf("Enter value of Array1 \n");

    for(i=0; i<3; i++)
    {
        printf("Enter value for %d = ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nEnter value of Array2 \n");

    for(i=0; i<3; i++)
    {
        printf("Enter value  for %d = ",i+1);
        scanf("%d",&b[i]);
    }

    printf("\n");

    for(i=0; i<3; i++)
    {
        c[i] = a[i];
    }
    for(i=0; i<3; i++)
    {
        c[j] = b[i];
        j++;
    }
    for(i=0; i<6; i++)
    {
        printf("Value %d = %d \n",i+1,c[i]);
    }
}
