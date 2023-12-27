// sum and average of all elements in the array.
#include<stdio.h>

void main()
{
    int n,i,sum=0,avg;
    printf("Enter size of Array :");
    scanf("%d",&n);
    int a[n];

    for(i=0; i<n; i++)
    {
        printf(" Enter value of array :");
        scanf("%d",&a[i]);
    }
    printf("\n");

    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }

    printf("sum = %d",sum);
    avg = sum/n;
    printf("\nAverage = %d",avg);
}
