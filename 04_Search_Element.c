#include<stdio.h>

void main()
{
    int a[10],i,s=0;

    for(i=0;i<10;i++)
    {
        printf("Enter value %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter value to Be Search :");
    scanf("%d",&s);

    for(i=0;i<10;i++)
    {
        if(a[i]==s)
        {
           s=a[i];
           printf("\nValue %d found at %d position",s,i+1);
           break;
        }
    }
}
