#include<stdio.h>

void main()
{
    int n;
    printf("\nEnter Number Of Disk :");
    scanf("%d",&n);

    if(n>0)
        transfer(n,'A','C','B');
}

void transfer(int n,char from,char to,char work)
{
    if(n==1)
        printf("\nMove Disk 1 from peg %c to peg %c ",from,to);
    else
    {
        transfer(n-1,from,work,to);
        printf("\nMove Disk %d from peg %c to peg %c",n,from,to);
        transfer(n-1,work,to,from);
    }
}
