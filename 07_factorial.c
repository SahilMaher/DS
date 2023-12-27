#include<stdio.h>

void main()
{
    int n,result;
    printf("Enter The Number :");
    scanf("%d",&n);

    result = factorial(n);
    printf("\nFactorial = %d",result);
}
int factorial(int n)
{
    if(n<1)
    {
        return 1;
    }
    else
    {
        return (n*factorial(n-1));
    }
}
