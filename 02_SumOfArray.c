#include<stdio.h>

void main()
{
    int a[5],b[5],c[5],i;

    printf("Enter value of Array1 :\n");

    for(i=0; i<5; i++)
    {
        printf("Enter value %d = ",i+1);
        scanf("%d",&a[i]);
    }

    printf("\nEnter value of Array2 :\n");

    for(i=0; i<5; i++)
    {
        printf("Enter value %d = ",i+1);
        scanf("%d",&b[i]);
    }

    printf("\n");

    for(i=0; i<5; i++)
    {
        c[i] = a[i] + b[i];
        printf("Sum is = %d\n",c[i]);

    }

}
