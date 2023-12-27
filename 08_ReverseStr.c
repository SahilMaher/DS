#include<stdio.h>
#define max 50

int stack[max],top=-1;
char s[50];

void push(char val)
{
    if(top==max-1)
    {
        printf("stack is overflow!");
    }
    else
    {
        top++;
        stack[top]=val;
    }
}
void pop()
{
    char val;
    if(top==-1)
    {
        printf("stack underflow!");
    }
    else
    {
        val=stack[top];
        top--;
        printf("%c",val);
    }
}

void main()
{
    int len,i;
    printf("\nEnter stirng :");
    gets(s);
    printf("\nReversed string is : ");
    len=strlen(s);
    for(i=0; i<len; i++)
        push(s[i]);
    for(i=0; i<len; i++)
        pop();
}

